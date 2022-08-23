const input = require('fs').readFileSync('./teste.txt', 'utf8');
const lines = input.split('\n');

function main() {
    for (let linha = 1; linha <= lines[0]; linha++) {
        const frase = ordernar_frase(lines[linha]);
        console.log(frase)
    }
}

function ordernar_frase(frase) {
    frase = frase.split(' ');

    for (let i = 0; i < frase.length - 1; i++) {
        for (let j = 0; j < frase.length - i - 1; j++) {
            if (frase[j].length < frase[j + 1].length) {
                let aux = frase[j];
                frase[j] = frase[j + 1];
                frase[j + 1] = aux;
            }
        }
    }
    return frase.join(' ')
}

main();