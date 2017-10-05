#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H


#include "vector.h"
#include <iostream>
using pep::vector;
using std::cout;
using std::endl;


/** TODO: complete the definition of the class CircularBuffer here
 *
 * Its constructor should take the size of the buffer as an argument
 *
 * It needs to have the functions:
 * - count() which returns how many things are in the buffer
 * - full() which returns true iff the buffer is full
 * - add() which takes an element and adds it to the buffer (you can assume the buffer is not full)
 * - remove() which removes the next element from the buffer (you can assume the buffer is not empty)
 */
class CircularBuffer {

private:
    vector<char> first;
    int temp = 0;
    int currentSize;
    int currentIndex;

public:
    CircularBuffer (int n) : first(n){

      
    }

    
    int count(){
       
        return currentSize;
    }

    bool full(){
        
        if(first.capacity() == currentSize){
           return true;
        }
        return false;

    }

    void add(char toAdd){

        for(int i = 0; i < first.capacity(); i++){

            
            if(first[i] == NULL){
                first[i] = toAdd;
                currentSize++;
                currentIndex = i;
                break;
            }

        }



    }

    char remove(){

         if(first.size() == 1){
             char elementToReturn = first[currentIndex];
             first.erase(first.begin() + currentIndex);
             currentSize--;
             return elementToReturn;

         }

        int toRemove = first.capacity() % (currentIndex + (first.capacity()-currentIndex));
        char  removee = first[toRemove];
        first.erase(first.begin() + toRemove);
        currentSize--;
        currentIndex = toRemove;
        return removee;




    }


};



// don't write any code below this line

#endif
