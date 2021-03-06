#ifndef _SYMBOL_OBFUSCATION_H_
#define _SYMBOL_OBFUSCATION_H_
#include "llvm/Pass.h"
#include "llvm/IR/LegacyPassManager.h"
using namespace std;
using namespace llvm;

// Namespace
namespace llvm {
	void addSymbolObfPass(legacy::PassManagerBase &PM);
}
#endif
