/* Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element key. 
   The task is to find the index of the given element key in the array A.
   
   Example:
              Input:
                    N = 9
                    A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}
                    key = 10
              Output:
                    5
                    Explanation: 10 is found at index 5. */

class Solution{
    public:
    int search(int arr[], int l, int h, int key)
    {
          while(l<=h)
          {
              int mid = l + (h-l)/2;
              if(arr[mid]==key) return mid;
              if(arr[l]<arr[mid]) 
              {
                  if(key>= arr[l] && key<arr[mid]){
                      h = mid-1;
                  } 
                  else l = mid +1;
              }
              else 
              {
                  if(key>arr[mid] && key<=arr[h]) 
                  {
                      l = mid +1;
                  }
                  else h = mid -1;
              }
          }
        return -1;
    }
};
