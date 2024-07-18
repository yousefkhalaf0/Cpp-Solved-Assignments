//Assignment 1
/*#include <iostream>
using namespace std;*/

//Q1
/*int main()
{
    cout << "Enter an integer num: ";

    int n;
    cin >> n;

    cout << "ur entered num is: " << n;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q2
/*int main()
{
    int a,b,c;

    cout << "Please enter first number: ";
    cin >> a;

    cout << "Please enter second number: ";
    cin >> b;

    cout << "Please enter third number: ";
    cin >> c;

    cout << "Summation of 3 integers is: " << a+b+c;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q3
/*int main()
{
    double a,b,c;

    cout << "Please enter first number: ";
    cin >> a;

    cout << "Please enter second number: ";
    cin >> b;

    cout << "Please enter third number: ";
    cin >> c;

    cout << "The average= " << (a+b+c)/3;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q4
/*int main()
{
    int w,h;

    cout << "Insert the width: ";
    cin >> w;

    cout << "Insert the height: ";
    cin >> h;

    cout << "Rectangle perimeter = " << 2*(w+h);
    cout << endl << "Rectangle area = " << w*h << endl;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q5
/*int main()
{
    int n,s1,s2,s3;

    cout << "Enter ur num: ";
    cin >> n;

    s1 = n % 10;
    n /= 10;
    s2 = n % 10;
    s3 = n /= 10;

    cout << "Sum of each digit of ur num = " << s1+s2+s3 ;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q6
/*int main()
{
    int h,m,s;

    cout << "Enter the time by seconds: ";
    cin >> s;

    h = s / 3600;
    m = (s - (h*3600)) / 60;
    s = (s - (h*3600)) - (m*60);

    cout << "H:M:S - " << h << ':' << m << ':' << s;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q7
/*int main()
{
    int n;

    cout << "Enter a num: ";
    cin >> n;

    if(n < 0)
        cout << "negative";
    else if (n > 0)
        cout << "positive";
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q8
/*int main()
{
    int n;

    cout << "Enter a num from 1 to 5: ";
    cin >> n;

    if (n == 1)
        cout << "One";
    else if (n == 2)
        cout << "Two";
    else if (n == 3)
        cout << "Three";
    else if (n == 4)
        cout << "Four";
    else if (n == 5)
        cout << "Five";
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q9
/*int main()
{
    int n1,n2,n3,n4,n5,sum;

    cout << "Enter ur first num: ";
    cin >> n1;
    cout << "Enter ur second num: ";
    cin >> n2;
    cout << "Enter ur third num: ";
    cin >> n3;
    cout << "Enter ur fourth num: ";
    cin >> n4;
    cout << "Enter ur fifth num: ";
    cin >> n5;

    if (n1 % 2 != 0)
        sum += n1;
    if (n2 % 2 != 0)
        sum += n2;
    if (n3 % 2 != 0)
        sum += n3;
    if (n4 % 2 != 0)
        sum += n4;
    if (n5 % 2 != 0)
        sum += n5;

    cout << "Sum of all odd values: " << sum;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q10
/*int main()
{
    int y;

    cout << "Enter the year: ";
    cin >> y;

    if (y % 400 == 0)
        cout << y << " is a leap year";
    else if (y % 4 == 0)
        cout << y << " is a leap year";
    else
        cout << "is not a leap year";
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q11
/*int main()
{
    int y;

    cout << "Enter ur birth year: ";
    cin >> y;

    y = 2022 - y;

    if (y >= 18)
        cout << "U r above 18!";
    else
        cout << "U r under 18!";
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q12
/*int main()
{
    int mrk;

    cout << "Enter ur mark: ";
    cin >> mrk;

    if (mrk < 25)
        cout << "F";
    else if (mrk >= 25 && mrk < 45)
        cout << "E";
    else if (mrk >= 45 && mrk < 50)
        cout << "D";
    else if (mrk >= 50 && mrk < 60)
        cout << "C";
    else if (mrk >= 60 && mrk < 80)
        cout << "B";
    else
        cout << "A";
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q13
/*int main()
{
    int m;

    cout << "Enter the month numerically: ";
    cin >> m;

    switch(m)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "August";
        break;
    case 9:
        cout << "September";
        break;
    case 10:
        cout << "October";
        break;
    case 11:
        cout << "November";
        break;
    case 12:
        cout << "December";
        break;
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q14
/*int main()
{
    int n;

    cout << "Insert a num: ";
    cin >> n;

    string res = (n % 2 == 0)? "Even" : "Odd";

    cout << res;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q15
/*int main()
{
    char ch;

    cout << "Enter a char: ";
    cin >> ch;

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        cout << ch << " is a vowel";
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << ch << " is a vowel";
    else
        cout << ch << " is a consonant";
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q16
/*int main()
{
    int a,b,c;

    cout << "Please enter first number: ";
    cin >> a;

    cout << "Please enter second number: ";
    cin >> b;

    cout << "Please enter third number: ";
    cin >> c;


    if (a > b && a > c)
        cout << a << " is the Max. num\n";
    else if (b > a && b > c)
        cout << b << " is the Max. num\n";
    else
        cout << c << " is the Max. num\n";

    if (a < b && a < c)
        cout << a << " is the Min. num\n";
    else if (b < a && b < c)
        cout << b << " is the Min. num\n";
    else
        cout << c << " is the Min. num\n";
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------




//Assignment 2
/*#include <iostream>
using namespace std;*/

//Q1
/*int main()
{
    for(int i = 10; i >= 1; i--)
    {
        cout << i << ' ';
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q2
/*int main()
{
    int n,sum = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter the num: ";
        cin >> n;
        sum += n;
    }

    cout << "AVG of ur nums = " << sum/10.0;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q3
/*int main()
{
    int n;

    cout << "Enter ur num: ";
    cin >> n;

    for(int i = 1; i <= 12; i++)
    {
        cout << i << " * " << n << " = " << i*n << endl;
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q4
/*int main()
{
    int a,b,sum = 0;

    cout << "Enter ur first num: ";
    cin >> a;
    cout << "Enter ur second num: ";
    cin >> b;

    for(int i = a; i <= b; i++)
    {
        sum += i;
    }

    cout << sum;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q5
/*int main()
{
    int n,sum = 0;

    while(true)
    {
        cout << "Enter a num: ";
        cin >> n;

        if(n >= 0)
            sum += n;
        else
        {
            cout << sum << endl;
            break;
        }
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q6
/*int main()
{
    int n,Max = 0;

    while(true)
    {
        cout << "Enter a num: ";
        cin >> n;

        if(n >= 0)
            {
                if(n > Max)
                    Max = n;
            }
        else
        {
            cout << Max << endl;
            break;
        }
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q7
/*int main()
{
    int n,cnt = 0;

    cout << "Enter a num: ";
    cin >> n;

    while(n > 0)
    {
        if(n % 2 == 0)
            n /= 2;
        else
            n--;
        cnt++;
    }

    cout << cnt;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q8
/*int main()
{
    int exp;
    float base,result = 1;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    cout << base << "^" << exp << " = ";

    while(exp != 0)
        {
        result *= base;
        exp--;
        }

    cout << result;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q9
/*int main()
{
    int odd,n;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter the num: ";
        cin >> n;

        if(n % 2 != 0)
            odd++;
    }

    cout << odd;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q10
/*int main()
{
    int a,b,G;

    cout << "Enter ur first num: ";
    cin >> a;
    cout << "Enter ur second num: ";
    cin >> b;

    for(int i = 2; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            G = i;
    }

    cout << G;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q11
/*int main()
{
    int n, Max = 0, SMax = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter the mun: ";
        cin >> n;

        if(n > Max)
        {
            SMax = Max;
            Max = n;
        }
        else if(n > SMax)
            SMax = n;
    }

    cout << "Second Max num is: " << SMax;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------




//Assignment 3
/*#include <iostream>
#include <cmath>
using namespace std;*/

//Q1
/*int main()
{
    int n;

    cout << "Enter the num: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << endl;

        for(int j = 1; j <= i; j++)
        {
            cout << i;
        }
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q2
/*int main()
{
    int n;

    cout << "Enter the num: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {

        for(int j = 1; j <= i; j++)
        {
            if(j == 1 || j == n || i == j || i == n)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q3
/*int main()
{
    int n;

    cout << "Enter the num: ";
    cin >> n;

    for(int i = n; i >= 1; i--)
    {
        cout << endl;

        for(int j = i; j >= 1; j--)
        {
            cout << '*';
        }
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q4
/*int main()
{
    int n;

    cout << "Enter the num: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        int x = (int)sqrt(i);

        for (int j = 2; j <= x; j++)
        {
            if (i % j == 0)
            {
                cout << i << " ";
                break;
            }
        }
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q5
/*int main()
{
    int n,num = 0;

    cout << "Insert a num: ";
    cin >> n;

    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    for(int i = num; i > 0; i = i / 10)
    {
        switch(i % 10)
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q6
/*int main()
{
    int odd = 0, even = 0;
    int arr[9] = {};

    for(int i = 0; i < 9; i++)
    {
        cout << "Enter ur number: ";
        cin >> arr[i];

        if(arr[i] % 2 == 0)
            even++;
        else if(arr[i] % 2 != 0)
            odd++;
    }

    cout << "Total even elements: " << even << endl;
    cout << "Total odd elements: " << odd << endl;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q7
/*int main()
{
    int arr[10] = {};
    int element;

    for(int i = 0; i < 10; i++)
    {
        cout << "Input elements in array: ";
        cin >> arr[i];
    }

    cout << "\nElement: ";
    cin >> element;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == element)
            cout << "\nElement found at index " << i;
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q8
/*int main()
{
    int arr[] = {5,7,8,8,5,8,7,7};
    int n, cnt = 0;

    cout << "Enter a num: ";
    cin >> n;

    cout << "Array ";
    for(int i =0; i < 8; i++)
    {
        cout << arr[i] << ' ';
    }

    for(int i = 0; i < 8; i++)
    {
        if(n == arr[i])
            cnt++;
    }

    cout << "\nNumber of occurrences of " << n << ": " << cnt;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q9
/*int main()
{
    int arr1[10] = {};
    int arr2[10] = {};

    for(int i = 0; i < 10; i++)
    {
        cout << "Input array1 element: ";
        cin >> arr1[i];

        arr2[i] = arr1[i];
    }

    cout << "\nArray1: ";
    for(int i =0; i < 10; i++)
    {
        cout << arr1[i] << ' ';
    }

    cout << "\nArray2: ";
    for(int i =0; i < 10; i++)
    {
        cout << arr2[i] << ' ';
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q10
/*int main()
{
    int arr[10] = {};

    for(int i = 0; i < 10; i++)
    {
        cout << "Input array element: ";
        cin >> arr[i];
    }

    for(int i = 0; i < 10; i++)
    {
        int repeated = 0;
        for(int j = 0; j < 10; j++)
        {
            if(arr[i] == arr[j])
                repeated++;
        }
        if(repeated == 1)
            cout << "All unique elements in the array are: " << arr[i] << endl;
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q11
/*int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n] = {};

    for(int i = 0; i < n; i++)
    {
        cout << "Input array element: ";
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i+1; j < n; j++)
        {
            sum = arr[i] + arr[j];
            if(sum == arr[n-1])
                cout << "Array pairs whose sum equal to " << arr[n-1] << " : " << arr[i] << "," << arr[j] << endl;
        }
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q12
/*int main()
{
    int n;

    cout << "Enter ur num of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++)
        {
            cout << ' ';
        }
        for(int j = 1; j <= (i*2-1); j++)
        {
            cout << '*';
        }

        cout << endl;
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q13
/*int main()
{
    int row;

    cout << "Enter number of rows: ";
    cin >> row;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= row-i; j++)
        {
            cout << ' ';
        }
        for(int j = 1; j <= row; j++)
        {
            cout << '*';
        }

        cout << endl;
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------




//Assignment 4
/*#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;*/

//Q1
/*int main()
{
    int arr[3][3];
    int sum = 0;

    cout << "=======MATRIX=======" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Enter the element: ";
            cin >> arr[i][j];

            if(i == j)
                sum += arr[i][j];
        }
    }

    cout << "Sum of main diagonal elements = " << sum;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q2
/*int main()
{
    int arr1[3][3], arr2[3][3], sum[3][3];

    cout << "=======MATRIX 1=======" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Enter the element: ";
            cin >> arr1[i][j];
        }
    }

    cout << "\n=======MATRIX 2=======" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Enter the element: ";
            cin >> arr2[i][j];

            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "\n=======SUM=======" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << sum[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q3
/*int main()
{
    int arr[3][3], sum = 0;

    cout << "=======MATRIX=======" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Enter the element: ";
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
      cout << "Sum of row " << i << ": " << sum << endl;
      sum = 0;
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*void print_num(int x)
{
    cout << x;
}

//Q4
int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    print_num(n);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*float AVG(int x, int y, int z)
{
    float avg = (x+y+z)/3.0;
    return avg;
}

//Q5
int main()
{
    int a,b,c;

    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;
    cout << "Enter third number: " << endl;
    cin >> c;

    cout << "\nAverage = " << AVG(a,b,c);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*bool check_prime(int n)
{
  bool prime = true;

  if (n == 0 || n == 1)
  {
    prime = false;
  }

  for(int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      prime = false;
      break;
    }
  }
  return prime;
}

//Q6
int main()
{
    int x;

    cout << "Enter the number: ";
    cin >> x;

    if(check_prime(x))
        cout << x << " is a prime number";
    else
        cout << x << " is not a prime number";
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*int cube(int n)
{
    int temp = 1;

    for(int i = 1; i <= 3; i++)
    {
        temp *= n;
    }
    return temp;
}

//Q7
int main()
{
    int x;

    cout << "Input any number: ";
    cin >> x;

    cout << "Cube of " << x << " = " << cube(x);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*float Diameter(float n)
{
    n *=2;
    return n;
}

float Circumference(float n)
{
    float temp = 2 * M_PI * n;
    return temp;
}

float Area(float n)
{
    float temp = M_PI * pow(n,2);
    return temp;
}

//Q8
int main()
{
    float r;

    cout << "Input radius: ";
    cin >> r;

    cout << "Diameter = " << Diameter(r) << " units" << endl;
    cout << "Circumference = " << Circumference(r) << " units" << endl;
    cout << "Area = " << Area(r) << " sq.units" << endl;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*void divisors(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            cout << i << ' ';
    }
}

//Q9
int main()
{
    int x;

    cout << "Enter a num: ";
    cin >> x;

    cout << "Divisors of " << x << " : ";
    divisors(x);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*bool divide(int n)
{
    bool div = false;

    if(n % 3 == 0  &&  n % 4 == 0)
        div = true;
    return div;
}

//Q10
int main()
{
    int x;

    cout << "Enter a num: ";
    cin >> x;

    if(divide(x))
        cout << "True ==> this number can divide by 3 and 4";
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------




//Assignment 5
/*#include <cctype>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;*/

/*void print_array(int arr[])
{
    cout << "Array elements: ";
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }
}

//Q1
int main()
{
    int arr[10];

    for(int i = 0; i < 10; i++)
    {
        cout << "Input element: ";
        cin >> arr[i];
    }

    print_array(arr);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*int SUM_array(int arr[])
{
    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    return sum;
}

//Q2
int main()
{
    int arr[10];

    for(int i = 0; i < 10; i++)
    {
        cout << "Input array element: ";
        cin >> arr[i];
    }

    cout << "Sum of array: " << SUM_array(arr);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*int SUM(int arr[][3])
{
    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j)
                sum += arr[i][j];
        }
    }

    return sum;
}

//Q3
int main()
{
    int arr[3][3];

    cout << "Input array elements: " << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Output " << SUM(arr);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*char str_max(char s[])
{
    char max_rpeated;
    int counter = 0, maximum = 0;
    for(int i = 0; i < 15; i++)
    {
        counter = 0;
        for(int j = 0; j < 15; j++)
        {
            if(s[i] == s[j])
                counter++;
        }
        if(maximum < counter)
        {
            maximum = counter;
            max_rpeated = s[i];
        }
    }

    return max_rpeated;
}

//Q4
int main()
{
    char str[15];

    cout << "Enter a string: ";
    cin >> str;

    cout << "Output " << str_max(str);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*string s_lower(string x)
{
    for (int i = 0; i < x.length(); i++)
    {
        x[i] = tolower(x[i]);
    }

    return x;
}

//Q5
int main()
{
    string a;

    cout << "Enter ur string: ";
    cin >> a;

    cout << s_lower(a);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*bool check(char x[])                 $$$$$$$$$$$ WRONG $$$$$$$$$$$$
{
    for(int i = 0; i < 15; i++)
    {
        if((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z'))
            return false;
        else if(x[i] >= '0' && x[i] <= '9')
            return true;
        else
            return false;
    }
}

//Q6
int main()
{
    char a[15];

    cout << "Input: ";
    cin >> a;

    if(check(a))
        cout << "Output: True";
    else
        cout << "Output: False";
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*int sum = 0;
int rev(int n)
{
    int rem;

    if(n)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        rev(n / 10);
    }
    else
        return sum;

}

//Q7
int main()
{
    int a;

    cout << "Input: ";
    cin >> a;

    cout << "Output: " << rev(a);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*int maximum(int x)
{
    int sum = 0, largest = 0;

    while(x != 0)
    {
        sum = x % 10;

    if(largest < sum)
        largest = sum;

        x /= 10;
    }

    return largest;
}

//Q8
int main()
{
    int a;

    cout << "Input: ";
    cin >> a;

    cout << "Output: " << maximum(a);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------




//Assignment 6
/*#include <iostream>
using namespace std;*/

/*class Circle
{
private:
    double radius = 1.0;
    string color = "red";
public:
    //Constructors
    Circle()
    {
    }

    Circle(double radius)
    {
        radius = radius;
    }

    Circle(double radius, string color)
    {
        radius = radius;
        color = color;
    }


    //Radius
    void setRadius(double radius)
    {
        radius = radius;
    }
    double getRadius()
    {
        return radius;
    }

    //Color
    void setColor(string color)
    {
        color = color;
    }
    string getColor()
    {
        return color;
    }

    //Area of the circle
    double getArea()
    {
        return 3.14 * (radius * radius);
    }
};

//Q1
int main()
{


    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*class Employee
{
private:
    int id, salary;
    string firstName, lastName;
public:
    //Constructor
    Employee(int id, string firstName, string lastName, int salary)
    {
        Employee::id = id;
        Employee::salary = salary;
        Employee::firstName = firstName;
        Employee::lastName = lastName;
    }


    int getID()
    {
        return id;
    }

    string getFirstName()
    {
        return firstName;
    }

    string getLastName()
    {
        return lastName;
    }

    string getName()
    {
        return firstName + ' ' + lastName;
    }

    //Salary
    void setSalary(int salary)
    {
        Employee::salary = salary;
    }
    int getSalary()
    {
        return salary;
    }
    int getAnnualSalary()
    {
        return salary * 12;
    }
    int raiseSalary(int percent)
    {
        salary += salary * (percent / 100.0);
        return salary;
    }
};

//Q2
int main()
{


    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*class Account
{
private:
    string id, name;
    int balance = 0;
public:
    //Constructors
    Account(string id, string name)
    {
        Account::id = id;
        Account::name = name;
    }
    Account(string id, string name, int balance)
    {
        Account::id = id;
        Account::name = name;
        Account::balance = balance;
    }

    string getID()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    int getBalance()
    {
        return balance;
    }

    //Transactions
    int credit(int amount)
    {
        balance += amount;
        return balance;
    }

    int debit(int amount)
    {
        if(amount <= balance && amount > 0)
        {
            balance -= amount;
            return balance;
        }
        else
        {
            cout << "Amount exceeded balance\n";
            return balance;
        }
        return balance;
    }

    int transferTo(Account& another, int amount)
    {
        if(amount <= balance && amount > 0)
        {
            another.credit(amount);
            balance -= amount;
            return balance;
        }
        else
        {
            cout << "Amount exceeded balance\n";
            return balance;
        }
    }
};

//Q3
int main()
{


    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


/*class Time
{
private:
    int hour, minute, second;
public:
    //Constructor
    Time(int hour, int minute, int second)
    {
        Time::hour = hour;
        Time::minute = minute;
        Time::second = second;
    }

    //Hour
    int getHour()
    {
        return hour;
    }
    void setHour(int hour)
    {
        Time::hour = hour;
    }

    //Minute
    int getMinute()
    {
        return minute;
    }
    void setMinute(int minute)
    {
        Time::minute = minute;
    }

    //Second
    int getSecond()
    {
        return second;
    }
    void setSecond(int second)
    {
        Time::second = second;
    }


    void setTime(int hour, int minute, int second)
    {
        Time::hour = hour;
        Time::minute = minute;
        Time::second = second;
    }

    Time nextSecond()
    {
        if(second == 59)
        {
             second = 0;

             if(minute == 59)
             {
                 minute = 0;

                 if(hour == 23)
                 {
                      hour = 0;
                 }
                 else
                 {
                     hour++;
                 }
             }
             else
             {
                 minute++;
             }
        }
        else
        {
             second++;
        }

        return Time(hour, minute, second);

    }
    Time previousSecond()
    {
      if(second == 0)
        {
             second = 59;

             if(minute == 0)
             {
                 minute = 59;

                 if(hour == 0)
                 {
                      hour = 23;
                 }
                 else
                 {
                     hour--;
                 }
             }
             else
             {
                 minute--;
             }
        }
        else
        {
             second--;
        }

        return Time(hour, minute, second);    }

};

//Q4
int main()
{


    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------




//Assignment 7
/*#include <iostream>
using namespace std;*/

//Q1
/*class Vehicle
{
protected:
    string vehicleModel, registrationNumber;
    int vehicleSpeed;
    double fuelCapacity, fuelConsumption; //Assume consumption is 5 liters per 50 km
public:
    //Constructors
    Vehicle()//default constructor
    {
    }
    Vehicle(string vehicleModel, string registrationNumber, int vehicleSpeed, double fuelCapacity, double fuelConsumption)//parameterized constructor
    {
        Vehicle::vehicleModel = vehicleModel;
        Vehicle::registrationNumber = registrationNumber;
        Vehicle::vehicleSpeed = vehicleSpeed;
        Vehicle::fuelCapacity = fuelCapacity;
        Vehicle::fuelConsumption = fuelConsumption;
    }

    //Methods
    void fuelNeeded(int distance)
    {
        if(distance > 0)
        {
            int fuel_N = distance / 50 * 5;
            cout << "Amount of fuel needed is " << fuel_N << endl;
        }
        else
        {
            cout << "Enter a valid number." << endl;
        }
    }
    void distanceCovered(int time)
    {
        if(time > 0)
        {
            int distance = vehicleSpeed * time;
            cout << "The distance traveled is " << distance << endl;
        }
        else
        {
            cout << "Enter a valid number." << endl;
        }
    }
    void display()
    {
        cout << "The vehicle model is " << vehicleModel
             << "\nRegistration number is " << registrationNumber
             << "\nVehicle speed is " << vehicleSpeed
             << "\nIt's fuel capacity is " << fuelCapacity
             << "\nIt's fuel consumption: " << fuelConsumption << endl;
    }
};


class Truck : public Vehicle
{
private:
    int cargoWeightLimit;
public:
    //Constructors
    Truck()//default constructor
    {
    }
    Truck(string vehicleModel, string registrationNumber, int vehicleSpeed, double fuelCapacity, double fuelConsumption, int cargoWeightLimit) : Vehicle(vehicleModel, registrationNumber, vehicleSpeed, fuelCapacity, fuelConsumption)//parameterized constructor
    {
        Truck::cargoWeightLimit = cargoWeightLimit;
    }

    //setter & getter
    int get_CargoWeightLimit()
    {
        return cargoWeightLimit;
    }
    void set_CargoWeightLimit(int cargoWeightLimit)
    {
        Truck::cargoWeightLimit = cargoWeightLimit;
    }

    //methods
    void display()
    {
        Vehicle::display();

        cout << "Cargo weight limit is " << cargoWeightLimit << endl;
    }
};


class Bus : public Vehicle
{
private:
    int numOfPassengers;
public:
    //Constructors
    Bus()//default constructor
    {
    }
    Bus(string vehicleModel, string registrationNumber, int vehicleSpeed, double fuelCapacity, double fuelConsumption, int numOfPassengers) : Vehicle(vehicleModel, registrationNumber, vehicleSpeed, fuelCapacity, fuelConsumption)//parameterized constructor
    {
        Bus::numOfPassengers = numOfPassengers;
    }

    //setter & getter
    int get_NumOfPassengers()
    {
        return numOfPassengers;
    }
    void set_NumOfPassengers(int numOfPassengers)
    {
        Bus::numOfPassengers = numOfPassengers;
    }

    //methods
    void display()
    {
        Vehicle::display();

        cout << "The number of passengers are " << numOfPassengers << endl;
    }
};

int main()
{

    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q2
/*class Circle //SuperClass
{
protected:
    double radius = 1.0;
    string color = "red";
public:
    //Constructors
    Circle()
    {
    }
    Circle(double radius)
    {
        Circle::radius = radius;
    }
    Circle(double radius, string color)
    {
        Circle::radius = radius;
        Circle::color = color;
    }

    //getters
    double get_Radius()
    {
        return radius;
    }
    string get_Color()
    {
        return color;
    }

    //setters
    void set_Radius(double radius)
    {
        Circle::radius = radius;
    }
    void set_Color(string color)
    {
        Circle::color = color;
    }

    //methods
    double get_Area()
    {
        return 3.14 * (radius * radius);
    }
    string toString()
    {
        return "Radius= " + to_string(radius) + " , " + "Color= " + color;
    }
};


class Cylinder : public Circle //SubClass
{
private:
    double height = 1.0;
public:
    //Constructors
    Cylinder()
    {
    }
    Cylinder(double radius) : Circle(radius)
    {
    }
    Cylinder(double radius, double height) : Circle(radius)
    {
        Cylinder::height = height;
    }
    Cylinder(double radius, string color, double height) : Circle(radius, color)
    {
        Cylinder::height = height;
    }

    //getter & setter
    double get_Height()
    {
        return height;
    }
    void set_Height(double height)
    {
        Cylinder::height = height;
    }

    //methods
    double get_Volume()
    {
        return 3.14 * (radius * radius) * height;
    }
};

int main()
{

    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q3 UNKNOWN
/*class MyPoint
{
private:
    int x, y;
public:
    //Constructors
    MyPoint()
    {
    }
    MyPoint(int x, int y)
    {
        MyPoint::x = x;
        MyPoint::y = y;
    }
};

class MyLine
{
private:
    MyPoint *begin0, *end0;
public:
    //Constructors
    MyLine()
    {
    }
    MyLine(int x1, int y1, int x2, int y2)
    {

    }
};

int main()
{

    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q4
/*class MyComplex
{
private:
    double real = 0.0, imag = 0.0;
public:
    //Constructors
    MyComplex()
    {
    }
    MyComplex(double real, double imag)
    {
        MyComplex::real = real;
        MyComplex::imag = imag;
    }

    //getters
    double get_Real()
    {
        return real;
    }
    double get_Imag()
    {
        return imag;
    }

    //setters
    void set_Real(double real)
    {
        MyComplex::real = real;
    }
    void set_Imag(double imag)
    {
        MyComplex::imag = imag;
    }

    //methods
    void set_Value(double real, double imag)
    {
        MyComplex::real = real;
        MyComplex::imag = imag;
    }

    string toString()
    {
        if(imag >= 0)
            return to_string(real) + "+" + to_string(imag) + "i";

        return to_string(real) + to_string(imag) + "i";
    }

    bool is_Real()
    {
        if(imag == 0)
            return true;

        return false;
    }

    bool is_Imaginary()
    {
        if(real == 0)
            return true;

        return false;
    }

    bool equals(double real, double imag)
    {
        if(real == imag)
            return true;

        return false;
    }

    bool equals(MyComplex another)
    {
        if(real == another.real && imag == another.imag)
            return true;

        return false;
    }

    double magnitude()
    {
        //UNKNOWN
    }

    MyComplex add_Into(MyComplex& right)
    {
        real = right.real;
        imag = right.imag;

        return MyComplex(real, imag);
    }

    MyComplex add_New(MyComplex& right)
    {
        MyComplex a;
        a.real = real + right.real;
        a.imag = imag + right.imag;

        return a;
    }
};

int main()
{

    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q5
/*class Point
{
protected:
    float x = 0.0f, y = 0.0f;
public:
    //Constructor
    Point()
    {
    }
    Point(float x, float y)
    {
        Point::x = x;
        Point::y = y;
    }

    //getters
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
    //float array[2]; getXY()
    //{
    //   float a[2];
    //    return a[2]={x, y};
    //}

    //setters
    void setX(float x)
    {
        Point::x = x;
    }
    void setY(float y)
    {
        Point::y = y;
    }
    void setXY(float x, float y)
    {
        Point::x = x;
        Point::y = y;
    }

    //method
    string toString()
    {
        return "(" + to_string(x) + "," + to_string(y) + ")";
    }
};

class MovablePoint : public Point
{
private:
    float xSpeed = 0.0f, ySpeed = 0.0f;
public:
    //Constructors
    MovablePoint()
    {
    }
    MovablePoint(float x, float y, float xSpeed, float ySpeed) : Point(x, y)
    {
        MovablePoint::xSpeed = xSpeed;
        MovablePoint::ySpeed = ySpeed;
    }
    MovablePoint(float xSpeed, float ySpeed)
    {
        MovablePoint::xSpeed = xSpeed;
        MovablePoint::ySpeed = ySpeed;
    }

    //getters
    float get_XSpeed()
    {
        return xSpeed;
    }
    float get_YSpeed()
    {
        return ySpeed;
    }
    //float arr[2]; get_Speed()
    //{
    //   return {xSpeed, ySpeed};
    //}

    //setters
    void set_XSpeed(float xSpeed)
    {
        MovablePoint::xSpeed = xSpeed;
    }
    void set_YSpeed(float ySpeed)
    {
        MovablePoint::ySpeed = ySpeed;
    }
    void set_Speed(float xSpeed, float ySpeed)
    {
        MovablePoint::xSpeed = xSpeed;
        MovablePoint::ySpeed = ySpeed;
    }

    //methods
    string toString()
    {
        return "(" + to_string(x) + "," + to_string(y) + ")" + "," + "speed=" + "(" + to_string(xSpeed) + "," + to_string(ySpeed) + ")";
    }

    MovablePoint move0()
    {
        MovablePoint a;
        a.x = x + xSpeed;
        a.y = y + ySpeed;

        return a;
    }
};

int main()
{

    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q6
//Inheritance and Composition both are design techniques. The Composition is a way to design or implement the "has-a" relationship whereas, the Inheritance implements the "is-a" relationship.

//Inheritance
/*class Person
{
protected:
    int age;
    string gender;
};
class Citizen : public Person
{
    string name, ssn;
};


//Composition
class President
{
    string name, gender, religion;
    int age;
};
class Nation
{
    President a;
    string location;
    double areaOfNation;
    int population;
};

int main()
{

    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------




//Assignment 8
/*#include <iostream>
using namespace std;*/

//Q1
/*template <typename T, typename U>
U max(T a, U b)
{
    if(a > b)
        return a;

    return b;
}

int main()
{
    cout << max(-5, -2);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q2
/*template <typename T, typename U>
void swap(T& a, U& b)
{
    T x = a;
    a = b;
    b = x;
}

int main()
{
    int a = 2, b = 5;
    swap(a, b);
    cout << "a= " << a << ", b= " << b;
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q3
/*template <class T>
class Calculator
{
public:
    T x, y;

    //constructors
    Calculator()
    {
    }

    //methods
    T add(T x, T y)
    {
        return x+y;
    }
    T subtract(T x, T y)
    {
        return x-y;
    }
    T multiply(T x, T y)
    {
        return x*y;
    }
    T divide(T x, T y)
    {
        if(y == 0)
        {
            cout << "Can not divide by zero!\n";
        }
        return x/y;
    }
};

int main()
{
    Calculator<int> c;

    cout << "add = " << c.add(3, 5)
         << "\nsubtract = " << c.subtract(9, 4)
         << "\nmultiply = " << c.multiply(2, 20)
         << "\ndivide = " << c.divide(12, 3);
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q4
/*class Vehicle
{
protected:
    string vehicleModel, registrationNumber;
    int vehicleSpeed;
    double fuelCapacity, fuelConsumption;
public:
    //Constructors
    Vehicle()//default constructor
    {
    }
    Vehicle(string vehicleModel, string registrationNumber, int vehicleSpeed, double fuelCapacity, double fuelConsumption)//parameterized constructor
    {
        Vehicle::vehicleModel = vehicleModel;
        Vehicle::registrationNumber = registrationNumber;
        Vehicle::vehicleSpeed = vehicleSpeed;
        Vehicle::fuelCapacity = fuelCapacity;
        Vehicle::fuelConsumption = fuelConsumption;
    }

    //Methods
    double fuelNeeded(int distance)
    {
        if(distance > 0)
            return fuelCapacity * distance;
        else
            cout << "Enter a valid number of distance." << endl;
    }
    void distanceCovered(int time)
    {
        if(time > 0)
        {
            int distance = vehicleSpeed * time;
            cout << "The distance traveled is " << distance << endl;
        }
        else
        {
            cout << "Enter a valid number." << endl;
        }
    }
    virtual void display() = 0;
};


class Truck : public Vehicle
{
private:
    int cargoWeightLimit;
public:
    //Constructors
    Truck()//default constructor
    {
    }
    Truck(string vehicleModel, string registrationNumber, int vehicleSpeed, double fuelCapacity, double fuelConsumption, int cargoWeightLimit) : Vehicle(vehicleModel, registrationNumber, vehicleSpeed, fuelCapacity, fuelConsumption)//parameterized constructor
    {
        Truck::cargoWeightLimit = cargoWeightLimit;
    }

    //setter & getter
    int get_CargoWeightLimit()
    {
        return cargoWeightLimit;
    }
    void set_CargoWeightLimit(int cargoWeightLimit)
    {
        Truck::cargoWeightLimit = cargoWeightLimit;
    }

    //methods
    void display()
    {
        cout << "The vehicle model is " << vehicleModel
             << "\nRegistration number is " << registrationNumber
             << "\nVehicle speed is " << vehicleSpeed
             << "\nIt's fuel capacity is " << fuelCapacity
             << "\nIt's fuel consumption: " << fuelConsumption << endl;

        cout << "Cargo weight limit is " << cargoWeightLimit << endl;
    }
};


class Bus : public Vehicle
{
private:
    int numOfPassengers;
public:
    //Constructors
    Bus()//default constructor
    {
    }
    Bus(string vehicleModel, string registrationNumber, int vehicleSpeed, double fuelCapacity, double fuelConsumption, int numOfPassengers) : Vehicle(vehicleModel, registrationNumber, vehicleSpeed, fuelCapacity, fuelConsumption)//parameterized constructor
    {
        Bus::numOfPassengers = numOfPassengers;
    }

    //setter & getter
    int get_NumOfPassengers()
    {
        return numOfPassengers;
    }
    void set_NumOfPassengers(int numOfPassengers)
    {
        Bus::numOfPassengers = numOfPassengers;
    }

    //methods
    void display()
    {
        cout << "The vehicle model is " << vehicleModel
             << "\nRegistration number is " << registrationNumber
             << "\nVehicle speed is " << vehicleSpeed
             << "\nIt's fuel capacity is " << fuelCapacity
             << "\nIt's fuel consumption: " << fuelConsumption << endl;

        cout << "The number of passengers are " << numOfPassengers << endl;
    }
};

int main()
{

    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q5
/*class DivideByZero : public exception
{
    virtual const char* what() const throw()
  {
    return "You can not divide by zero!\n";
  }
}ByZero;

class DivideByNegative : public exception
{
    virtual const char* what() const throw()
  {
    return "You can not divide by negative!\n";
  }
}ByNegative;


int divide(int x, int y)
{
    return x/y;
}

int main()
{
    int x,y;
    cin >> x >> y;

    try
    {
        if(y == 0)
            throw ByZero;
        else if(y < 0)
            throw ByNegative;
        else
            cout << divide(x, y) << '\n';
    }
    catch(exception& e)
    {
        cout << e.what();
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------




//Assignment 9
/*#include <iostream>
#include <vector>
using namespace std;*/

//Q1
/*class Instructor
{
private:
    string firstName, lastName, id, password;
public:
    //constructors
    Instructor()
    {
    }
    Instructor(string firstName, string lastName, string id, string password)
    {
        Instructor::firstName = firstName;
        Instructor::lastName = lastName;
        Instructor::id = id;
        Instructor:: password = password;
    }

    //getters
    string get_firstname()
    {
        return firstName;
    }
    string get_lastname()
    {
        return lastName;
    }
    string get_ID()
    {
        return id;
    }
    string get_password()
    {
        return password;
    }

    //setters
    void set_firstname(string firstName)
    {
        Instructor::firstName = firstName;
    }
    void set_lastname(string lastName)
    {
        Instructor::lastName = lastName;
    }
    void set_id(string id)
    {
        Instructor::id = id;
    }
    void set_password(string password)
    {
        Instructor::password = password;
    }

    //methods
    void display()
    {
        cout << "Instructor firstname: " << firstName
             << "\nInstructor lastname: " << lastName
             << "\nInstructor id: " << id
             << "\nInstructor password: " << password << endl;
    }
};

class Student
{
private:
    string firstName, lastName, id, password;
public:
    //constructors
    Student()
    {
    }
    Student(string firstName, string lastName, string id, string password)
    {
        Student::firstName = firstName;
        Student::lastName = lastName;
        Student::id = id;
        Student::password = password;
    }

    //getters
    string get_firstname()
    {
        return firstName;
    }
    string get_lastname()
    {
        return lastName;
    }
    string get_ID()
    {
        return id;
    }
    string get_password()
    {
        return password;
    }

    //setters
    void set_firstname(string firstName)
    {
        Student::firstName = firstName;
    }
    void set_lastname(string lastName)
    {
        Student::lastName = lastName;
    }
    void set_ID(string id)
    {
        Student::id = id;
    }
    void set_password(string password)
    {
        Student::password = password;
    }

    //methods
    void display()
    {
        cout << "Student firstname: " << firstName
             << "\nStudent lastname: " << lastName
             << "\nStudent id: " << id
             << "\nStudent password: " << password << endl;
    }
};

class Course
{
private:
    string name, id;
    Instructor i;
    vector<Student> students;
public:
    //constructors
    Course()
    {
    }
    Course(string name, string id, Instructor i, vector<Student> students)
    {
        Course::name = name;
        Course::id = id;
        Course::i = i;
        Course::students = students;
    }

    //getters
    string get_name()
    {
        return name;
    }
    string get_ID()
    {
        return id;
    }
    Instructor get_instructor()
    {
        return i;
    }
    vector<Student> get_students()
    {
        return students;
    }

    //setters
    void set_name(string name)
    {
        Course::name = name;
    }
    void set_ID(string id)
    {
        Course::id = id;
    }
    void set_instructor(Instructor i)
    {
        Course::i = i;
    }
    void set_students(vector<Student> students)
    {
        Course::students = students;
    }

    //methods
    void display()
    {
        cout << "Course name: " << name
             << "\nCourse id: " << id
             << "\nCourse instructor: " << i
             << "\nCourse students: " << students << endl;
    }
};

int main()
{

    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q2
/*class DivideByZero : public exception
{
    virtual const char* what() const throw()
  {
    return "You can not divide by zero!\n";
  }
}ByZero;

class DivideByNegative : public exception
{
    virtual const char* what() const throw()
  {
    return "You can not divide by negative!\n";
  }
}ByNegative;


template<class T>
class Calculator
{
private:
    T a, b;
public:
    //constructors
    Calculator()
    {
    }

    //methods
    T add(T a, T b)
    {
        return a+b;
    }
    T subtract(T a, T b)
    {
        return a-b;
    }
    T multiply(T a, T b)
    {
        return a*b;
    }
    T divide(T a, T b)
    {
        return a/b;
    }
};

int main()
{
    int x, y;
    cout << "Enter ur first num: ";
    cin >> x;
    cout << "Enter ur second num: ";
    cin >> y;

    Calculator<int> c;
    cout << "add: " << c.add(x, y)
         << "\nsubtract: " << c.subtract(x, y)
         << "\nmultiply: " << c.multiply(x, y)
         << "\ndivide: ";

    try
    {
        if(y == 0)
            throw ByZero;
        else if(y < 0)
            throw ByNegative;
        else
            cout << c.divide(x, y) << endl;
    }
    catch(exception& e)
    {
        cout << e.what();
    }

    cout << "---------------------------------------------------------------------------------------------------";

    double a, b;
    cout << "Enter ur first num: ";
    cin >> a;
    cout << "Enter ur second num: ";
    cin >> b;

    Calculator<double> c;
    cout << "add: " << c.add(a, b)
         << "\nsubtract: " << c.subtract(a, b)
         << "\nmultiply: " << c.multiply(a, b)
         << "\ndivide: ";

    try
    {
        if(b == 0)
            throw ByZero;
        else if(b < 0)
            throw ByNegative;
        else
            cout << c.divide(a, b) << endl;
    }
    catch(exception& e)
    {
        cout << e.what();
    }
    return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------


//Q3


//---------------------------------------------------------------------------------------------------------------------------------




//Assignment 10
#include <iostream>
using namespace std;

//Q1
