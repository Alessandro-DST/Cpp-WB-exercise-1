# Use a lightweight Ubuntu base
FROM ubuntu:24.04

# Install build tools and cmake
RUN apt-get update && \
    apt-get install -y build-essential cmake gdb git && \
    rm -rf /var/lib/apt/lists/*

# Install GoogleTest for unit tests
RUN apt-get update && \
    apt-get install -y libgtest-dev cmake && \
    cd /usr/src/gtest && cmake . && make && cp lib/*.a /usr/lib

# Set working directory
WORKDIR /app

# Default command
CMD ["/bin/bash"]
