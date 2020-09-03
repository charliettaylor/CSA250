/*
    Taylor, Charlie

    September 6, 2020

    CS A250
    Lab A1
*/

void deleteDuplicates(int arr[], int& elems)
{
    for(int i = 0; i < elems; i++)
    {
        for(int j = elems - 1; j > i; j--)
        {
            if(arr[i] == arr[j])
            {
                for(int k = j; k < elems; k++)
                {
                    arr[j] = arr[j + 1];
                }
                --elems;                
            }
        }
    }
}

void printArray(const int arr[], int elems)
{
    for(int i = 0; i < elems; i++)
    {
        std::cout << arr[i] << " ";
    }
}
