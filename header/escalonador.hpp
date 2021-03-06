#ifndef ESCALONADOR_HPP
#define ESCALONADOR_HPP

#include <vector>
#include <queue>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <unistd.h>
#include "processo.hpp"
#include "memoria.hpp"

class escalonador
{
	private:
		vector<processo_t> processos;
		queue<processo_t> f_usuario_p1;
		queue<processo_t> f_usuario_p2;
		queue<processo_t> f_usuario_p3;
		queue<processo_t> f_temporeal;
		memoria m;
		void vai_ffila(processo_t _p);
		void popula();
		void executa_processo(processo_t& _p);
		bool prox_processo(processo_t *p);
		bool ainda_existe_processo();
		void order_process();
		void start_time();
		void show_allp();
		void despachante (processo_t& p);
		void print_exec(processo_t p);
	public:
		int seconds_passed;
		void utils_tomem(string nome_arq);
		void simulacao();
		int get_time_passed();
};

#endif //ESCALONADOR_HPP
