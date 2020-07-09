test:mwdecoder.cpp
	g++ -std=c++11 `itpp-config --cflags` -o mwdecoder_test.out mwdecoder.cpp `itpp-config --libs`
mwdecoder:funcs.cpp mwdecoder.cpp
	g++ -std=c++11 `itpp-config --cflags` -o mwdecoder.out funcs.cpp mwdecoder.cpp  `itpp-config --libs`

clean:
	rm *.out