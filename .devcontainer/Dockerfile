# Use the official Ubuntu 24.04 LTS base image
FROM ubuntu:24.04

# Set non-interactive installation mode
ENV DEBIAN_FRONTEND=noninteractive

# Update and install necessary packages
RUN apt-get update && apt-get install -y \
    git \
    wget \
    make \
    unrar-free \
    autoconf \
    automake \
    cmake \
    ninja-build \
    libtool \
    gperf \
    flex \
    bison \
    texinfo \
    gawk \
    ncurses-dev \
    libexpat1-dev \
    python3 \
    python3-pip \
    python3-serial \
    sed \
    curl \
    vim \
    python3.12-venv

#    && rm -rf /var/lib/apt/lists/*

RUN curl -fsSL -o /root/get-platformio.py https://raw.githubusercontent.com/platformio/platformio-core-installer/master/get-platformio.py && \
    python3 /root/get-platformio.py

ENV PATH="/root/.platformio/penv/bin:${PATH}"

