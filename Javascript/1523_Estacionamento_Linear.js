var input = require('fs').readFileSync('/dev/stdin', 'utf8');
let lines = input.split('\n');

let estacionamento = []

const realizaSaidaAutomovel = (horarioEntradaNovoVeiculo) => {
    estacionamento = estacionamento.filter((automovel) => parseInt(automovel.horarioSaida) > parseInt(horarioEntradaNovoVeiculo))
}

const verificaProcedenciaSaida = (horarioSaida) => {
    let procedenciaCorreta = true
    estacionamento.forEach((automovel) => {
        if (parseInt(automovel.horarioSaida) < parseInt(horarioSaida)) {
            procedenciaCorreta = false
        }
    })

    return procedenciaCorreta
}

const estacionaAutomovel = (horarioEntrada, horarioSaida, tamanhoEstacionamento) => {
    if (estacionamento.length > 0)
        realizaSaidaAutomovel(horarioEntrada)

    if (estacionamento.length < tamanhoEstacionamento && verificaProcedenciaSaida(horarioSaida)) {
        estacionamento.push({ horarioEntrada, horarioSaida })
        return true
    }

    return false
}

const main = () => {
    do {
        const casoTeste = lines.shift()
        if (casoTeste === '0 0')
            break

        const quantidadeAutomoveis = casoTeste.split(' ')[0]
        const tamanhoEstacionamento = casoTeste.split(' ')[1]
        const automoveis = lines.splice(0, quantidadeAutomoveis)

        let possivelEstacionar = true

        for (let i = 0; i < quantidadeAutomoveis; i++) {
            const horarios = automoveis.shift().split(' ')
            possivelEstacionar = estacionaAutomovel(horarios[0], horarios[1], tamanhoEstacionamento)
            if (!possivelEstacionar) break
        }

        estacionamento = []
        console.log(possivelEstacionar ? 'Sim' : 'Nao')
    } while (true)
}

main()