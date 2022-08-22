var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

let contador = 0;

let merge = function (left, right) {
    let mergeArray = [], indexLeft = 0, indexRight = 0

    while (indexLeft < left.length || indexRight < right.length) {

        if (left[indexLeft] <= right[indexRight] || indexRight == right.length) {
            mergeArray.push(left[indexLeft])
            indexLeft++
        } else {
            mergeArray.push(right[indexRight])
            contador += (left.length - indexLeft)
            indexRight++
        }
    }

    return mergeArray
}

function mergeSort(array) {
    const half = array.length / 2

    if (array.length < 2) {
        return array
    }

    const left = array.splice(0, half)
    return merge(mergeSort(left), mergeSort(array))
}

const main = () => {
    for (let i = 0; i <= lines.length - 2; i++) {
        mergeSort(lines[i].slice(2, lines[i].length).split(' '))
        console.log(contador % 2 === 0 ? 'Carlos' : 'Marcelo')
        contador = 0;
    }
}

main()
