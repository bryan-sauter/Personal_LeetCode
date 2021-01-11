class FooBar {
private:
    int n;
    int conCount = 1;
    mutex mut;
    condition_variable conVar;
public:
    FooBar(int n) {
        this->n = n;
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            unique_lock<mutex> lock(mut);
            
            conVar.wait(lock, [this]() { return conCount % 2 != 0;});
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
            conCount++;
            conVar.notify_all();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            unique_lock<mutex> lock(mut);
            
            conVar.wait(lock, [this]() { return conCount % 2 == 0;});
        	// printBar() outputs "bar". Do not change or remove this line.
        	printBar();
            conCount++;
            conVar.notify_all();
        }
    }
};
