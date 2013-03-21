#ifndef _MFSQRT_H
#define _MFSQRT_H

#include "MFunction.h"

namespace mtk
{

	class MFSqrt:public MFunction{
		protected:
			MFunction *m_fn;

		public:
		MFSqrt(MFunction *fn=NULL);
		virtual MFunction* Clone();
		virtual bool IsOk();
		virtual bool IsConstant(MVariablesList* variables);
		virtual MFunction* Solve(MVariablesList* variables);
		virtual MFunction* Derivate(MVariablesList *variables);
		virtual MVariablesList* GetVariablesList(MVariablesList *list=NULL);
		virtual MSistem* CalcDominum(MSistem *update);
		inline MFunction *GetFn(){
			return m_fn;
		}
		void SetFn(MFunction *fn);
		virtual void Release();
	};

}
#endif