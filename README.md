# Open MP and MPI sandbox

[![Open MP](https://img.shields.io/badge/open-MP-pgreen.svg)](https://www.open.mp)
[![Open MPI](https://img.shields.io/badge/open-MPI-pgreen.svg)](https://www.open-mpi.org)
[![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)](https://en.cppreference.com/w/c/language)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=c%2B%2B&logoColor=white)](https://en.cppreference.com/w/c/language)
[![VScode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=flat&logo=visual%20studio%20code&logoColor=white)](https://code.visualstudio.com)
[![Docker](https://img.shields.io/badge/Docker-2496ED.svg?style=flat&logo=Docker&logoColor=white)](https://www.docker.com)

Sandbox for running C, C++ project with openMP or MPI dependency in docker.

## Get repository

```bash
git clone https://gitlab.fit.cvut.cz/babakjan/openmpsandbox.git
cd openmpsandbox
```

## Build container

```bash
docker build -t openmpsandbox .
```

## Run container

```bash
docker run -it -v `pwd`:/work openmpsandbox
```

## Run main.cpp in terminal
```bash
make run
```

## Run main.cpp in VS code

-   Install extension [Dev containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)

-   Run remote development
    -   Open development environment
        <img src="./images/start-remote-development.png" title="Start remote development"/>
    -   install extensions in Remote development [C, C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools), [makefile](https://marketplace.visualstudio.com/items?itemName=ms-vscode.makefile-tools)
    -   Configuration
        <img src="./images/configuration.png" title="Configuration" />
    -   Target
        <img src="./images/target.png" title="Target" />
    -   Launch
        <img src="./images/launch.png" title="Launch" />
