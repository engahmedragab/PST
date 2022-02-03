#include <iostream>
#include <vector>
using namespace std;

//int main()
//{
//	int n;
//	cin >> n;
//    vector<int> cards[10000];
//    int S = 0 , D = 0;
//    int i = 0;
//    while (i < n) {
//        int temp = 0;
//        cin >> temp;
//        cards->push_back(temp);
//        i++;
//    }
//
//    for (int i = 0;i < n;i++) {
//        int lenght = cards->size();
//        if (cards->front() > cards->back()) {
//            if (i % 2)
//            {
//                D += cards->front();
//            }
//            else
//            {
//                S += cards->front();
//            }
//            cards->erase(cards->begin());
//
//        }
//        else if (cards->front() < cards->back() || lenght == 1) {
//            if (i % 2)
//            {
//                D += cards->back();
//            }
//            else
//            {
//                S += cards->back();
//            }
//            cards->pop_back();
//        }
//        
//    }
//	cout << S << ' ' << D;
//    return 0;
//}
