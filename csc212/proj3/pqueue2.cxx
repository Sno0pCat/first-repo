// FILE: pqueue2.cxx
// IMPLEMENTS: PriorityQueue (See pqueue2.h for documentation.)
// IMPLEMENTED BY: (Nadim Siddique (nsiddiq000@citymail.cuny.edu)
//
// NOTE: You will need -lm at the end of your compile line to pick up
// the math library!

// INVARIANT for the PriorityQueue Class:
//   1. The member variable many_items is the number of items in the
//      PriorityQueue.
//   2. The items themselves are stored in the member variable heap,
//      which is a partially filled array organized to follow the usual
//      heap storage rules from Chapter 11 of the class notes.
// NOTE: Private helper functions are implemented at the bottom of this
// file along with their precondition/postcondition contracts.
 
#include <cassert>    // Provides assert function
#include <iomanip>    // Provides setw
#include <iostream>   // Provides cin, cout
#include <cmath>      // Provides log2
#include "pqueue2.h"
using namespace std;

PriorityQueue::PriorityQueue( )
{
    many_items = 0;
}

void PriorityQueue::insert(const Item& entry, unsigned int priority)
{
    assert(many_items < CAPACITY);

    // 1. Insert at the end
    size_t current_index = many_items;
    heap[current_index].data = entry;
    heap[current_index].priority = priority;
    ++many_items;

    // 2. bubble up while child has bigger priority than parent
    while (current_index > 0 &&
           heap[current_index].priority > parent_priority(current_index))
    {
        swap_with_parent(current_index);
        current_index = parent_index(current_index);
    }
}

PriorityQueue::Item PriorityQueue::get_front( )
{
    assert(many_items > 0);

    // 1. Save root data to return
    Item answer = heap[0].data;

    // 2. Move last element to root and shrink heap
    --many_items;
    if (many_items > 0)
    {
        heap[0] = heap[many_items];

        // 3. Bubble down from the root
        size_t current_index = 0;

        while (!is_leaf(current_index) &&
               heap[current_index].priority < big_child_priority(current_index))
        {
            size_t bc = big_child_index(current_index);

            // Swap with bigger child
            OneItemInfo temp = heap[current_index];
            heap[current_index] = heap[bc];
            heap[bc] = temp;

            current_index = bc;
        }
    }

    return answer;
    }

bool PriorityQueue::is_leaf(size_t i) const
// Precondition: (i < many_items)
// Postcondition: If heap[i] has no children in the heap, then the function
// returns true. Otherwise the function returns false.
{
    assert(i < many_items);
    // If the left child index is out of range, there are no children
    return (2*i + 1 >= many_items);
}

size_t PriorityQueue::parent_index(size_t i) const
// Precondition: (i > 0) && (i < many_items)
// Postcondition: The return value is the index of the parent of heap[i].
{
    assert(i > 0 && i < many_items);
    return (i - 1) / 2;
}

unsigned int PriorityQueue::parent_priority(size_t i) const
// Precondition: (i > 0) && (i < many_items)
// Postcondition: The return value is the priority of the parent of heap[i].
{
    assert(i > 0 && i < many_items);
    return heap[parent_index(i)].priority;
}

size_t PriorityQueue::big_child_index(size_t i) const
// Precondition: !is_leaf(i)
// Postcondition: The return value is the index of one of heap[i]'s children.
// This is the child with the larger priority.
{
     assert(!is_leaf(i)); // precondition

    size_t left = 2*i + 1;
    size_t right = 2*i + 2;

    if (right >= many_items) {
        // Only left child exists
        return left;
    } else {
        // Both children exist; return the one with larger priority
        if (heap[left].priority >= heap[right].priority)
            return left;
        else
            return right;
    }
}

unsigned int PriorityQueue::big_child_priority(size_t i) const
// Precondition: !is_leaf(i)
// Postcondition: The return value heap[big_child_index(i)].priority
{
    assert(!is_leaf(i)); 
    return heap[big_child_index(i)].priority;
}

void PriorityQueue::swap_with_parent(size_t i)
// Precondition: (i > 0) && (i < many_items)
// Postcondition: heap[i] has been swapped with heap[parent_index(i)]
{
    assert(i > 0 && i < many_items);

    size_t p = parent_index(i);
    OneItemInfo temp = heap[i];
    heap[i] = heap[p];
    heap[p] = temp;

}
