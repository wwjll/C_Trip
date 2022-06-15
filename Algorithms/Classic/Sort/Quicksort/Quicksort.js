let arr = [2,5,3,4,7,1,6];
// TODO: wrong js does't support tail recursion optimization
function quick_sort(nums, l, r) {
  if(l + 1 > r) return;
  let first = l, last = r - 1, pivot = nums[first];
  while(first < last)
  {
    while(first < last && nums[last] >= pivot) {
      --last;
    }
    nums[first] = nums[last];
    while(first < last && nums[first] <= pivot)
    {
      ++first;
    }
    nums[last] = nums[first];
  }
  nums[first] = pivot;
  quick_sort(nums, l, first);
  quick_sort(nums, first + l, r);
}

quick_sort(arr, 0, arr.length);