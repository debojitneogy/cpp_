#include <iostream>
using std::cout;
using std::cin;

void sort(int list[],int size)
{
    for(int i = 0;i<(size-1);i++)
    {
        for(int j = 0;j<(size - i -1);j++)
        {
            int temp;
            
            if (list[j] > list[j+1])
            {
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }    
    }

}

int main()
{
    int debug[] = {1,3,4,2,5,9,7,4,5,6,1,3};
    const int size = sizeof(debug)/sizeof(debug[0]);

    sort(debug,size);

    for(int i;i<size;i++)
    {
        cout << debug[i] << "\n";
    }

    return 0;
}