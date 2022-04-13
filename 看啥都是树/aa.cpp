#include <map>

#include <string>

#include <iostream>

using namespace std;

int main()

{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int i = 100;
    for (i = 0; a[i] < 7; ++i)
        ;
    printf("%d", i);
    // map<int, string> mapStudent;

    // mapStudent[1] = "student_one";

    // mapStudent[2] = "student_two";

    // mapStudent[3] = "student_three";
    // mapStudent[3] = "student_last";

    // map<int, string>::iterator iter;

    // for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)

    //     cout << iter->first << ' ' << iter->second << endl;
}