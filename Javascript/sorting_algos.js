/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArray = function(nums) {
    // bubblesort(nums);
    // mergesort(nums, 0, nums.length-1);
    quicksort(nums, 0, nums.length-1);
    return nums;
};

function quicksort(nums, start, end) {
    if (start >= end) return;
    let index = partition(nums, start, end);
    quicksort(nums, start, index-1);
    quicksort(nums, index+1, end);
}

function partition(nums, start, end) {
    let pivot = nums[end];
    let pindex = start;
    for (let index=start; index <= end-1; index++) {
        if (nums[index] <= pivot) {
           swap(nums, pindex, index);
           pindex++; 
        }
    }
    if (pindex < end) swap(nums, pindex, end);
    return pindex;
}

function swap(nums, index, start) {
    let tmp = nums[start];
    nums[start] = nums[index];
    nums[index] = tmp;
}

function mergesort(nums, start, end) {
    if (!(start < end)) return;
    let median = start + Math.floor((end-start)/2);
    mergesort(nums, start, median);
    mergesort(nums, median+1, end);
    merge(nums, start, median, end);
}

function merge(nums, start, median, end) {
    let tmp = new Array(end-start+1);
    let window1 = start;
    let window2 = median+1;
    let index = 0;
    while(window1 <= median && window2 <= end) {
        if (nums[window1] < nums[window2])
           tmp[index++] = nums[window1++];
        else tmp[index++] = nums[window2++];
    }
    while (window1 <= median) {
        tmp[index] = nums[window1];
        window1++;
        index++;
    }
    while (window2 <= end) tmp[index++] = nums[window2++];
    index=start;
    let i = 0;
    while(index<=end) {
        nums[index++] = tmp[i++];
    }
}

function bubblesort(nums) {
    for (let i=nums.length-1; i>=0; i--) {
        for (let j=0; j<i; j++) {
            if (nums[j] > nums[j+1]) {
                swap(nums, j, j+1);
            }
        }
    }
}

function swap(nums, i, j) {
    let temp = nums[j];
    nums[j] = nums[i];
    nums[i] = temp;
}
