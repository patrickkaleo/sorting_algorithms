FROM ubuntu:latest
# install the appropriate tools to compile the code 
RUN apt-get update && apt-get install -y build-essential \
    valgrind \
    gdb \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY . .
