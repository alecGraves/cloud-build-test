FROM ubuntu:bionic

RUN ulimit -n 2048 && \
	apt-get update && \
	apt-get -y install --no-install-recommends cmake build-essential

RUN apt-get autoremove && \
    apt-get clean && \
    apt-get autoclean && \
    rm -rf /var/lib/apt/lists/*

COPY hello /root/hello
COPY test /root/test
COPY CMakeLists.txt /root/
COPY build.sh /root/

RUN cd /root && \
    ./build.sh
