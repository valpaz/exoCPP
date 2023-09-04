#include <iostream>
#include <array>
#include <queue>
#include <stack>
#include <deque>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    /* Regarder https://fr.cppreference.com/ */

    // array //
    array<int,3> monArray = {1,2,3};
    for ( auto i : monArray){
        cout << i << endl;
    }

    // queue //
    queue<int> maQueue;
    maQueue.push(1);maQueue.push(4);maQueue.push(9);
    while (!maQueue.empty()){
        cout << maQueue.front() << endl;
        maQueue.pop();
    }

    // Stack //
    stack<int> monStack;
    monStack.push(1);monStack.push(4);monStack.push(9);
    while (!monStack.empty()){
        cout << monStack.top() << endl;
        monStack.pop();
    }


    // deque //
    deque<int> maDeque = {1,2,3};
    while (!maDeque.empty()){
        cout << maDeque.front() << endl;
        maDeque.pop_front();
    }

    // priority_queue //
    priority_queue<int> monPQ;
    monPQ.push(3);
    monPQ.push(1);
    monPQ.push(7);
    while (!monPQ.empty()){
        cout << monPQ.top() << endl;
        monPQ.pop();
    }

    // unordered_set //
    unordered_set<string> monUS;
    monUS.insert("code");
    monUS.insert("in");
    monUS.insert("c++");
    for (auto it = monUS.begin(); it != monUS.end();it++){
        cout << *it << endl;
    }

    // unordered_map //
    unordered_map<string, int> monUM;
    monUM["a"] = 10;
    monUM["b"] = 20;
    monUM["c++"] = 30;
    for (auto x : monUM){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
