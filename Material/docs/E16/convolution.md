---
title: Camadas convolucionais
sidebar_position: 1
sidebar_class_name: autoestudo
---

# Camadas convolucionais

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/HGwBXDKFk9I" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::
<br></br>

:::tip Exercício 27.01

**Implementando a Operação de Convolução 2D**

Comece implementando a operação básica de convolução em 2D. Para isso:

- Crie uma função que recebe como entrada:
  - Uma imagem de entrada representada como um tensor 2D (matriz) de
    valores de pixels (não precisa utilizar opencv. Sugiro pegar uma matriz
    28x28 do MNIST e usá-la).
  - Um kernel (filtro) também representado como um tensor 2D de pesos.
- A função deve aplicar o kernel à imagem de entrada utilizando a operação de
  convolução.
- Retorne o mapa de características resultante da convolução.

**Dica**: Lembre-se de que a convolução 2D envolve o deslocamento do kernel
sobre a imagem e o cálculo do produto escalar em cada posição.

:::

:::tip Exercício 27.02

**Criando uma Classe para a Camada Convolucional**

Expanda sua implementação criando uma classe que representa uma **Camada
Convolucional**. A classe deve:

- Conter múltiplos kernels (filtros), permitindo gerar múltiplos mapas de
  características.
- Permitir definir o número de filtros, o tamanho dos kernels e outros
  hiperparâmetros como stride e padding.
- Implementar o método `forward` que recebe um tensor de entrada (por exemplo,
  uma imagem) e aplica todos os filtros, retornando um tensor 3D contendo todos
  os mapas de características resultantes.

:::

:::tip Exercício 27.03

**Integrando a Camada Convolucional ao Framework de Inferência**

Integre a camada convolucional que você implementou ao seu framework de
inferência. Para isso:

- Modifique a estrutura da sua classe de rede neural para suportar diferentes
  tipos de camadas (por exemplo, densas e convolucionais).
- Permita que o usuário adicione camadas convolucionais e densas em qualquer
  ordem, definindo a arquitetura da rede.
- Ajuste o método de inferência (`forward pass`) para percorrer todas as
  camadas, garantindo que as dimensões dos tensores sejam compatíveis entre as
  camadas.

:::

:::tip Exercício 27.04

**Construindo uma Rede Convolucional para Classificar o MNIST**

Utilizando o framework atualizado, construa uma rede neural convolucional
simples capaz de classificar dígitos do conjunto de dados MNIST. Para isso:

- Defina a arquitetura da rede com as seguintes camadas (sugestão):
  - Uma camada convolucional com um certo número de filtros e tamanho de
    kernel.
  - Uma função de ativação (por exemplo, ReLU).
  - Uma camada de pooling (opcional para simplificar; se incluir, implemente
    uma camada de pooling simples).
  - Camadas densas (fully connected) para mapear os mapas de características às
    classes de saída.
- Inicialize os pesos e bias das camadas (podem ser valores aleatórios ou fixos
  para testes).
- Prepare um exemplo de entrada (uma imagem do MNIST) e execute o `forward
  pass` para obter a predição da rede.
- **Observação**: Como o foco é na implementação, você pode utilizar uma
  pequena parte do MNIST ou dados sintetizados que representem imagens de
  dígitos.

:::
