const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');


let assasinos = new Map()
let vitimas = new Map()

const showHall = () => {
    console.log('HALL OF MURDERERS')
    assasinos = new Map([...assasinos.entries()].sort());
    assasinos.forEach((value, label) => {
        console.log(label, value)
    })
}

const main = () => {
    for (let i = 0; i < lines.length - 1; i++) {
        const [assasino, vitima] = lines[i].split(' ')

        if (!vitimas.has(assasino))
            assasinos.set(assasino, assasinos.has(assasino) ? assasinos.get(assasino) + 1 : 1)

        if (!vitimas.has(vitima)) {
            vitimas.set(vitima, vitima)
            assasinos.delete(vitima)
        }
    }
    showHall()
}

main()
