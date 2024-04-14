// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
  private:
    T arr[200];
    int top;
public:
    TStack():top(0){ }
    T get() const {
        if (top > 0)
            return arr[top];
    }
    bool isEmpty() const {
        return top == 0;
    }
    bool isFull() const {
        return top == size - 1;
    }
    void pop() {
        if (top > 0)
            return arr[--top];
    }
    void push(T item) {
        if (top <= size - 1)
            arr[++top] = item;
    }
};

#endif  // INCLUDE_TSTACK_H_
