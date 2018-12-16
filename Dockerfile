FROM maddinat0r/debian-samp

ADD . .
RUN mkdir -p build
ENTRYPOINT [ "make", "build-inside" ]