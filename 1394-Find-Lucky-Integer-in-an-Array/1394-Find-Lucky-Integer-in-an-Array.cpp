

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int i, lucky_number=-1;
        sort(arr.begin(), arr.end());
        for(i=arr.size()-1 ; i>=0 ; i--)
        {
            if(arr[i]==count(arr.begin(), arr.end(), arr[i]))
            {
                lucky_number = arr[i];
                return lucky_number;
            }
        }
        return lucky_number;
    }
};
  

  
/*
Dry Run
Initialization:

arr = [2, 3, 3, 4, 4, 4]
lucky_number = -1
Sorting the Array:

After sorting: arr = [2, 3, 3, 4, 4, 4] (already sorted)
For Loop (from end to beginning):

Iteration 1 (i = 5):
arr[5] = 4
count(arr.begin(), arr.end(), 4) counts the occurrences of 4 in the array, which is 3.
arr[5] == 3 (false)
lucky_number remains -1
Iteration 2 (i = 4):
arr[4] = 4
count(arr.begin(), arr.end(), 4) = 3
arr[4] == 3 (false)
lucky_number remains -1
Iteration 3 (i = 3):
arr[3] = 4
count(arr.begin(), arr.end(), 4) = 3
arr[3] == 3 (false)
lucky_number remains -1
Iteration 4 (i = 2):
arr[2] = 3
count(arr.begin(), arr.end(), 3) = 2
arr[2] == 2 (true)
lucky_number = 3
return 3 and exit the loop
Return Statement:

The function returns 3 as the lucky number.
*/