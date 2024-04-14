// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
private:
    T* arr;
    int top;

public:
    TStack() {
        arr = new T[size];
    }
    ~TStack() {
        delete[] arr;
    }
    bool isEmpty() const {
        return top == -1
    }
    bool isFull() const {
        return top == size;
    }
    T pop() {
        return arr[top--];
    }
    T get() {
        return arr[top];
    }
    void push(T item) {
        arr[++top] = item;
    }
};

#endif  // INCLUDE_TSTACK_H_
