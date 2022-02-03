//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    int n , m , x , y;
//    cin >> n;
//    int sho[100];
//    for (int i = 1; i <= n; i++) {
//        cin >> sho[i];
//    }
//    cin >> m;
//    while (m > 0) {
//        cin >> x >> y;
//        if (x - 1 > 0 && (y <= sho[x]))
//        {
//            sho[x - 1] += y - 1;
//        }
//        if (y <= sho[x])
//        {
//            sho[x + 1] += sho[x] - y;
//        }
//        sho[x] = 0;
//        m--;
//    }
//    for (int i = 1; i <= n; i++) {
//        cout << sho[i] << endl;
//    }
//    return 0;
//}