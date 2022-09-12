const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

const main = () => {
    do {
        const usecase = lines.shift()

        if (usecase === '0')
            break

        const listagemPrimeiroDia = lines.splice(0, usecase)
        const qtdAlunosPresentes = lines.shift()
        const listaSegundoDia = lines.splice(0, qtdAlunosPresentes)

        let qtdAssinaturasFalsas = 0

        for (let i = 0; i < listaSegundoDia.length; i++) {
            const [nome, assinatura] = listaSegundoDia[i].split(' ')
            const assinaturaOficial = buscaAssinaturaOficial(nome, listagemPrimeiroDia)

            if (!validaAssinatura(assinatura, assinaturaOficial)) {
                qtdAssinaturasFalsas++
            }
        }

        console.log(qtdAssinaturasFalsas)
    } while (true)
}

const buscaAssinaturaOficial = (aluno, listagemPrimeiroDia) => {
    for (let i = 0; i < listagemPrimeiroDia.length; i++) {
        const [nome, assinatura] = listagemPrimeiroDia[i].split(' ')
        if (aluno === nome)
            return assinatura
    }
}

const validaAssinatura = (assinatura, assinaturaOficial) => {
    let diferencas = 0

    for (let i = 0; i < assinaturaOficial.length; i++) {
        if (assinatura[i] !== assinaturaOficial[i])
            diferencas++
    }

    return diferencas > 1 ? false : true
}

main()
