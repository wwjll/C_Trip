let arr1 = [1, 2, 3];
let arr2 = [4, 5, 6, 7];
let arr3 = [1, 2, 2, 3];
let arr4 = [1, 2, 3, 4, 5, 6, 7, 8, 9]

function permute(arr) {
    // 交换数组下标为 i, j 的两元素
    function swap(arr, i, j) {
        let tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    // 全排列实现
    let end = arr.length;
    let res = [];
    function wrapper(arr, begin) {
        if (begin == end) {
            console.log(arr);
            res.push(arr);
        } else {
            for (let i = begin; i < end; i++) {
                if (arr[i] == arr[i + 1]) {
                    // 如果数组的元素重复了
                    continue;
                }
                swap(arr, i, begin);
                wrapper(arr, begin + 1);
                swap(arr, i, begin);
            }
        }
    }
    wrapper(arr, 0);
}

permute(arr4);