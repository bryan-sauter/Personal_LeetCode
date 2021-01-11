class ZeroEvenOdd {
private:
    int n;
    int conCount = 1;
    bool zeroUnlock = true;
    mutex mut;
    condition_variable conVar;
​
public:
    ZeroEvenOdd(int n) {
        this->n = n;
    }
​
    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        for(int i = 0; i < n; ++i)
        {
            unique_lock<mutex> lock(mut);
            
            conVar.wait(lock, [this]() {return zeroUnlock;});
            
            printNumber(0);
            zeroUnlock = false;
            conVar.notify_all();
        }
    }
​
    void even(function<void(int)> printNumber) {
        for(int i = 2; i <= n; i+=2)
        {
            unique_lock<mutex> lock(mut);
            
            conVar.wait(lock, [this]() {return !zeroUnlock && conCount % 2 == 0;});
            
            printNumber(i);
            conCount++;
            zeroUnlock = true;
            conVar.notify_all();
        }        
    }
​
    void odd(function<void(int)> printNumber) {
        for(int i = 1; i <= n; i+=2)
        {
            unique_lock<mutex> lock(mut);
            
            conVar.wait(lock, [this]() {return !zeroUnlock && conCount % 2 != 0;});
            
            printNumber(i);
            conCount++;
            zeroUnlock = true;
            conVar.notify_all();
        }        
    }
};
