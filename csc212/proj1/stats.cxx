#include "stats.h"
#include <algorithm>
#include <cmath>
#include <cassert>


namespace main_savitch_2C { 

statistician::statistician()
{
    count = 0;
    total = 0;
}
void statistician::reset()
{
    count = 0;
    total = 0;
}
void statistician::next(double r ){
    count += 1;
    total += r;

    if(count ==1){
        largest = r;
        tinyest = r;
    }else{
        if (r<tinyest)
            tinyest =r;

    if (r > largest)
        largest = r;
}
}

int statistician::length() const { 
    return count;
}

double statistician::sum() const{
    return total;
}

double statistician::mean() const{
    assert(count > 0);
    return total/count;
}

double statistician::minimum() const{
    assert(count>0);
    return tinyest;
}
double statistician::maximum() const{
    assert(count>0);
    return largest;
}


statistician operator+(const statistician& s1, const statistician& s2){
    statistician result;
    result.count = s1.count + s2.count;
    result.total = s1.total + s2.total;

    //case a: if both empty;
    if(s1.count == 0 && s2.count ==0){
        return result;
    }

    //case 2 : if one is empty;
    if(s1.count == 0){
        result.tinyest = s2.tinyest;
        result.largest = s2.largest;
        return result;
    }
    //case 3; if s2 is empty;
    if(s2.count == 0){
        result.tinyest = s1.tinyest;
        result.largest = s1.largest;
        return result;
    }
    //case 4; both non empty;
    result.tinyest = std::min(s1.tinyest, s2.tinyest);
    result.largest = std::max(s1.largest,s2.largest);
    return result;


}

statistician operator*(double scale, const statistician& s){
    statistician result;
    result.count = s.count;
    result.total = s.total *scale;

    //case 1; empty
    if(s.count == 0){
        return result;
    }
    //case b ; scale ==0
    if(scale ==0){
        result.total =0;
        result.tinyest = 0;
        result.largest = 0;
        return result;
    }
    //case c, scale >0;
    if(scale>0){
        result.tinyest = s.tinyest*scale;
        result.largest = s.largest*scale;
    }else{
        result.tinyest = s.largest *scale;
        result.largest = s.tinyest*scale;
    }

    return result;
}



bool operator==(const statistician& s1, const statistician& s2) {
    //both empty
     if (s1.length() == 0 && s2.length() == 0) return true;

    // exactly one empty
    if (s1.length() == 0 || s2.length() == 0) return false;

    // both non-empty
    return (s1.length()  == s2.length()  &&
            s1.sum()     == s2.sum()     &&
            s1.minimum() == s2.minimum() &&
            s1.maximum() == s2.maximum());
}

}