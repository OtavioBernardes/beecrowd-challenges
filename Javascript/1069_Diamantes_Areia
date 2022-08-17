var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
const buscaDiamantes = (mina) => {    
    let inicioDiamante = -1
    let fimDiamante = -1
    
    for (i = 0; i < mina.length; i++){
        if(mina[i] === '<')
            inicioDiamante = i
        if (mina[i] === '>' && inicioDiamante !== -1)
            fimDiamante = i
        
        if(inicioDiamante !== -1 && fimDiamante !== -1)
            i = mina.length
    }
   
     if(inicioDiamante === -1 || fimDiamante === -1)
         return 0
    
    return 1 + buscaDiamantes(mina.slice(0, inicioDiamante) + mina.slice(fimDiamante+1, mina.length))
}

const main = () => {
    const numero_casos = parseInt(lines[0])
    for (let i = 1; i <= numero_casos; i++){
        console.log(buscaDiamantes(lines[i]))
    }
    
}

main()
