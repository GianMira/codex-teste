# Primeiro teste com Codex + WSL + GitHub

Este repositório é um experimento inicial integrando:

- **WSL2 (Ubuntu)** rodando dentro do Windows  
- **OpenAI Codex CLI** como agente de código no terminal  
- **Git + GitHub** para versionar e publicar o projeto

A ideia é usar o Codex como um “co-piloto” de desenvolvimento, ajudando a criar arquivos, sugerir código e organizar o repositório, enquanto o WSL fornece um ambiente Linux completo.

---

## 🧱 Estrutura do projeto

Arquivos principais:

- `main.py`  
  Script Python simples que imprime uma mensagem de teste:

  ```python
  def main() -> None:
      print("Olá, Giancarlo!")


  if __name__ == "__main__":
      main()
