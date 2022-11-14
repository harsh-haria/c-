/*
Leetcode (26) Easy
https://leetcode.com/problems/remove-duplicates-from-sorted-array/

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
*/
#include <bits/stdc++.h>

int removeDuplicates(std::vector<int> &A)
{
    int count = 0;
    int n = A.size();
    for (int i = 1; i < n; i++)
    {
        if (A[i] == A[i - 1])
            count++;
        else
            A[i - count] = A[i];
    }
    return n - count;
}

int main()
{
    std::vector<int> array{1, 2, 3, 3, 4, 4, 4, 5, 5, 6, 7};
    int ans = removeDuplicates(array); // 7
    std::cout << "Distinct Element count is: " << ans << std::endl;
}
