const arquivo = require('fs').readFileSync('./test.txt', 'utf8');
const lines = arquivo.split('\n');

const bubbleSort = (array) => {
    let contador = 0
    const tamanhoArray = array.length;

    for (let i = 0; i < tamanhoArray; i++) {
        for (let j = 0; j < (tamanhoArray - i - 1); j++) {
            const valor1 = parseInt(array[j])
            const valor2 = parseInt(array[j + 1])
            if (valor1 > valor2) {
                let auxilar = valor1;
                array[j] = valor2;
                array[j + 1] = auxilar;
                contador++
            }
        }
    }
    return contador
}

const main = () => {
    const numero_casos = parseInt(lines[0])

    if (numero_casos > 0)
        for (let i = 1; i <= numero_casos; i++) {
            const index = i * 2
            const quantidade_trocas = bubbleSort(lines[index].split(' '))
            console.log(`Optimal train swapping takes ${quantidade_trocas} swaps.`)
        }
}

main()
