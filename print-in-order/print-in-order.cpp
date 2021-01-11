class Foo {
private:
    int count = 1;
    mutex mut;
    condition_variable conVar;
    
public:
    Foo() {
        
    }
​
    void first(function<void()> printFirst) {
        unique_lock<mutex> lock(mut);
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        count = 2;
        conVar.notify_all();
    }
​
    void second(function<void()> printSecond) {
        unique_lock<mutex> lock(mut);
        
        conVar.wait(lock, [this]() {return count == 2;});
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        count = 3;
        conVar.notify_all();
    }
​
    void third(function<void()> printThird) {
        unique_lock<mutex> lock(mut);
        conVar.wait(lock, [this]() {return count == 3;});
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};
