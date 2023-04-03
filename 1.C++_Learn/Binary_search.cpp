#include <iostream>
#include <vector>
using namespace std;
// leetcode 二分查找专题
class Solution
{
public:
    // 标准二分模板 ---1---
    int search_1(vector<int> &nums, int target);
    int search_2(vector<int> &nums, int target);
    // x 的平方根
    int mySqrt(int x);
    // 猜数字的大小
    int guessNumber(int n);
    // 搜索旋转排序数组
    int search_array(vector<int> &nums, int target);
};

int guess(int a)
{
    return 0;
}
int Solution::search_1(vector<int> &nums, int target)
{
    int num_size = nums.size();
    int left = 0, right = num_size - 1;
    int mid = 0;
    while (left <= right)
    {
        // mid = (left + mid) / 2; //这种方式可能会造成溢出
        // 使用如下方式替换
        mid = left + (right - left) / 2;
        if (nums[mid] > target)
            right = mid - 1;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            return mid;
    }
    return -1;
}

int Solution::mySqrt(int x)
{
    if (x < 2)
        return x;
    int l = 1, r = x - 1;
    int mid = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        // 防止溢出
        if (mid == x / mid)
            return mid;
        else if (mid < x / mid)
            l = mid + 1;
        else
            r = mid - 1;
    }
    // 想一想为啥最后返回的是r
    return r;
}

int Solution::guessNumber(int n)
{
    int l = 1, r = n;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (guess(mid) == 0)
            return mid;
        else if (guess(mid) == -1)
            r = mid - 1;
        else
            l = mid + 1;
    }
}
int Solution::search_array(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;
    int mid = 0;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (nums[mid] == target)
            return mid;

        if (nums[mid] > nums[r]) // 此时说明0 - mid 递增
        {
            if (nums[mid] > target && nums[l] <= target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if (nums[mid] < target && nums[r] <= target)
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return -1;
}

int Solution::search_2(vector<int> &nums, int target)
{
    if (nums.size() == 0)
        return -1;

    int left = 0, right = nums.size();
    while (left < right)
    {
        // Prevent (left + right) overflow
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    // Post-processing:
    // End Condition: left == right
    if (left != nums.size() && nums[left] == target)
        return left;
    return -1;
}

int main()
{

    return 0;
}