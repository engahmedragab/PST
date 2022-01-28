//#include <iostream>
//using namespace std;
//
//int main() {
//    int n , t = 0; cin >> n ;
//    for (int i = 0; i < n; i++)
//    {
//        int nOfT = 0; bool assign = false;
//        for (int i = 0; i < 3; i++)
//        {
//            int team;  cin >> team;
//            nOfT = i == 0 ? 0 : nOfT;
//            if (team == 1) nOfT++;
//            if (nOfT > 1 && assign == false) { t++; assign = true; }
//        }
//    }
//    cout << t << endl;
//    return 0;
//}


#include <iostream>

using namespace std;

//int main()
//{
//    int n, Petya, Vasya, Tonya, number(0);
//    cin >> n;
//    while (n--)
//    {
//        cin >> Petya >> Vasya >> Tonya;
//        if (Petya + Vasya + Tonya >= 2)
//        {
//            number += 1;
//        }
//    }
//    cout << number << endl;
//    return 0;
//}