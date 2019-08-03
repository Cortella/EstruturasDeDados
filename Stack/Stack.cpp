#include "Stack.h"


class Stack{

    Stack::Stack(){
        size_=0;
        elements_ = new double[size_+1]
    }

    int Stack::GetSize(){
        return size_;
    }

    void Stack::UpStack(double k){
         this->elements_[size_] = k;
         size_++;
     }

    void Stack::UnStack(){
         if(this->Empty){
             cout<< "Stack Overflow!" << endl;
         }else{
             this->~Stack();
         }
     }

     bool Stack::Empty(){
         if(this->size_ == 0){
             return true;
         }
         return false;
     }

    bool Stack::operator==(Stack& x){
        if(this->size_ != x.size_){
           return false;
         }
        for(int i=0;i<x->GetSize();i++){
            if(this->elements_[i] != x.elements_[i]){
                return false;
            }
        }
    }

    void Stack::operator=(Stack &x){
        while(this->size_!=0){
            this->~Stack();
        }
        while(x.GetSize() != 0){
            this->UpStack(x->Top());
            x.UnStack();
        }
    }

    double Stack::Top(){
        return this->elements[this->size_];
    }

     Stack::~Stack(){
         delete[size_] elements_;
         size--;
     }
    
}