
     #include <iostream>

     using std::cout;
     using std::cin; 

     int main()  {

       int n, *iPtr;

       cin >> n;
       iPtr = new int[n];

       for(int i = 0; i < n; i++) {

        cin >> iPtr[i];

       }

       for(int i = 0; i <n; i++) {

        cout << iPtr[i] << "\n";

        }

       delete[] iPtr;
 
       return 0;

       } 
       
