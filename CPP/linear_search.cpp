/*
Code : Linear Search
Author : Prathamesh Patil
*/

# include <iostream>

using namespace std;

int main()
{
        int n;
        cout << "Enter the size of array : ";
        cin >> n;
        
        int arr[n];
        
        for(int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
        
        // linear search logic
        
        int search_element, flag = 1;
        
        cout << "Enter the element to search in the array : ";
        cin >> search_element;
        
        for(int i = 0; i < n; i++)
        {
                if(arr[i] == search_element)
                {
                        cout << "Element " << search_element << " found at the position : " << i << endl;
                        flag = 0;
                        break;
                }
        }
        
        if(flag == 1)
        {
                cout << "Entered element is not present in the array...!!" << endl;        
        }
}
