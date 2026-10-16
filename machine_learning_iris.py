# Passo 1: Importar Bibliotecas e Carregar Dados
import tensorflow as tf
import pandas as pd
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
import numpy as np

# Carregando a base de dados Iris. 'X' são as características, 'y' são as espécies.
iris = load_iris()
X = iris.data
y = iris.target

# Passo 2: Pré-processamento dos Dados
# Dividindo os dados em conjuntos de treino e teste (80/20).
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Normalizando os dados para que fiquem na mesma escala.
scaler = StandardScaler()
X_train = scaler.fit_transform(X_train)
X_test = scaler.transform(X_test)

# Passo 3: Construir o Modelo
# Criando um modelo de rede neural simples com o Keras.
model = tf.keras.Sequential([
    # Camada de entrada com 10 neurônios e ativação 'relu'.
    tf.keras.layers.Dense(10, activation='relu', input_shape=(X_train.shape[1],)),
    # Camada de saída com 3 neurônios (uma para cada espécie) e ativação 'softmax'.
    tf.keras.layers.Dense(3, activation='softmax')
])

# Compilando o modelo. Usando 'adam' como otimizador e 'accuracy' como métrica.
model.compile(
    optimizer='adam',
    loss='sparse_categorical_crossentropy',
    metrics=['accuracy']
)

# Passo 4: Treinar o Modelo
# Treinando o modelo por 50 épocas.
print("Treinando o modelo...")
history = model.fit(X_train, y_train, epochs=50, validation_data=(X_test, y_test))

# Passo 5: Avaliar o Modelo
# Avaliando a performance no conjunto de teste.
loss, accuracy = model.evaluate(X_test, y_test, verbose=0)
print(f"\nPrecisão do modelo: {accuracy:.4f}")

# Passo 6: Fazer Previsões
# Testando com um novo exemplo de flor.
new_flower_data = np.array([[5.1, 3.5, 1.4, 0.2]])
new_flower_scaled = scaler.transform(new_flower_data)

# Fazendo a previsão.
new_prediction = model.predict(new_flower_scaled)
predicted_class = np.argmax(new_prediction)

# Mostrando o resultado final.
print("\nPrevisão para uma nova flor:")
print(f"Características: {new_flower_data[0]}")
print(f"Espécie prevista: {iris.target_names[predicted_class]}")