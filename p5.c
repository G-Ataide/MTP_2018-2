typedef
  unsigned long long int
Bytes8;
typedef
  struct LCG {Bytes8 a, c, m, rand_max, atual; }
LCG;

void semente(LCG * r, Bytes8 seed) {
  r->a = 0x5DEECE66DULL;
  r->c = 11ULL;
  r->m = (1ULL << 48);
  r->rand_max = r->m - 1;
  r->atual = seed;
}

Bytes8 lcg_rand(LCG * r) {
  r->atual = (r->a * r->atual + r->c) % r->m;
  return r->atual;
}

double lcg_rand_01(LCG * r) {
  return ((double) lcg_rand(r))/(r->rand_max);
}
