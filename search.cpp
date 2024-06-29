#includ <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
int arr[10] = {0,1,2,3,4,5,6,7,8,9};
int target = 7;

for (int i = 0; i<10; i++)
{
if (arr[i]==target)
{
cout<<"Found";
break;
}
}
return 0;
}