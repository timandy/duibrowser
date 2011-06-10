/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#include "config.h"

#include "JSCSSVariablesDeclaration.h"

#include <wtf/GetPtr.h>

#include <kjs/PropertyNameArray.h>
#include "CSSRule.h"
#include "CSSVariablesDeclaration.h"
#include "JSCSSRule.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCSSVariablesDeclarationTableValues[5] =
{
    { "cssText", (intptr_t)JSCSSVariablesDeclaration::CssTextAttrNum, DontDelete, 0 },
    { "length", (intptr_t)JSCSSVariablesDeclaration::LengthAttrNum, DontDelete|ReadOnly, 0 },
    { "parentRule", (intptr_t)JSCSSVariablesDeclaration::ParentRuleAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSCSSVariablesDeclaration::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSVariablesDeclarationTable = { 63, JSCSSVariablesDeclarationTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSCSSVariablesDeclarationConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSVariablesDeclarationConstructorTable = { 0, JSCSSVariablesDeclarationConstructorTableValues, 0 };

class JSCSSVariablesDeclarationConstructor : public DOMObject {
public:
    JSCSSVariablesDeclarationConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSCSSVariablesDeclarationPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSVariablesDeclarationConstructor::s_info = { "CSSVariablesDeclarationConstructor", 0, &JSCSSVariablesDeclarationConstructorTable, 0 };

bool JSCSSVariablesDeclarationConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSVariablesDeclarationConstructor, DOMObject>(exec, &JSCSSVariablesDeclarationConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSVariablesDeclarationConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSCSSVariablesDeclarationPrototypeTableValues[5] =
{
    { "getVariableValue", (intptr_t)jsCSSVariablesDeclarationPrototypeFunctionGetVariableValue, DontDelete|Function, 1 },
    { "removeVariable", (intptr_t)jsCSSVariablesDeclarationPrototypeFunctionRemoveVariable, DontDelete|Function, 1 },
    { "setVariable", (intptr_t)jsCSSVariablesDeclarationPrototypeFunctionSetVariable, DontDelete|Function, 2 },
    { "item", (intptr_t)jsCSSVariablesDeclarationPrototypeFunctionItem, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSVariablesDeclarationPrototypeTable = { 15, JSCSSVariablesDeclarationPrototypeTableValues, 0 };

const ClassInfo JSCSSVariablesDeclarationPrototype::s_info = { "CSSVariablesDeclarationPrototype", 0, &JSCSSVariablesDeclarationPrototypeTable, 0 };

JSObject* JSCSSVariablesDeclarationPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSCSSVariablesDeclaration.prototype]]");
    return KJS::cacheGlobalObject<JSCSSVariablesDeclarationPrototype>(exec, prototypeIdentifier);
}

bool JSCSSVariablesDeclarationPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSCSSVariablesDeclarationPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSCSSVariablesDeclaration::s_info = { "CSSVariablesDeclaration", 0, &JSCSSVariablesDeclarationTable , 0 };

JSCSSVariablesDeclaration::JSCSSVariablesDeclaration(JSObject* prototype, CSSVariablesDeclaration* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSCSSVariablesDeclaration::~JSCSSVariablesDeclaration()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSCSSVariablesDeclaration::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSCSSVariablesDeclarationTable.entry(exec, propertyName);
    if (entry) {
        slot.setStaticEntry(this, entry, staticValueGetter<JSCSSVariablesDeclaration>);
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<CSSVariablesDeclaration*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSCSSVariablesDeclaration, Base>(exec, &JSCSSVariablesDeclarationTable, this, propertyName, slot);
}

bool JSCSSVariablesDeclaration::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<CSSVariablesDeclaration*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue* JSCSSVariablesDeclaration::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CssTextAttrNum: {
        CSSVariablesDeclaration* imp = static_cast<CSSVariablesDeclaration*>(impl());
        return jsString(exec, imp->cssText());
    }
    case LengthAttrNum: {
        CSSVariablesDeclaration* imp = static_cast<CSSVariablesDeclaration*>(impl());
        return jsNumber(exec, imp->length());
    }
    case ParentRuleAttrNum: {
        CSSVariablesDeclaration* imp = static_cast<CSSVariablesDeclaration*>(impl());
        return toJS(exec, WTF::getPtr(imp->parentRule()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSCSSVariablesDeclaration::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSCSSVariablesDeclaration, Base>(exec, propertyName, value, &JSCSSVariablesDeclarationTable, this);
}

void JSCSSVariablesDeclaration::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case CssTextAttrNum: {
        CSSVariablesDeclaration* imp = static_cast<CSSVariablesDeclaration*>(impl());
        imp->setCssText(value->toString(exec));
        break;
    }
    }
}

void JSCSSVariablesDeclaration::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<CSSVariablesDeclaration*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getPropertyNames(exec, propertyNames);
}

JSValue* JSCSSVariablesDeclaration::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[CSSVariablesDeclaration.constructor]]");
    return KJS::cacheGlobalObject<JSCSSVariablesDeclarationConstructor>(exec, constructorIdentifier);
}

JSValue* jsCSSVariablesDeclarationPrototypeFunctionGetVariableValue(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSVariablesDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSVariablesDeclaration* castedThisObj = static_cast<JSCSSVariablesDeclaration*>(thisValue);
    CSSVariablesDeclaration* imp = static_cast<CSSVariablesDeclaration*>(castedThisObj->impl());
    const UString& variableName = args[0]->toString(exec);


    KJS::JSValue* result = jsString(exec, imp->getVariableValue(variableName));
    return result;
}

JSValue* jsCSSVariablesDeclarationPrototypeFunctionRemoveVariable(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSVariablesDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSVariablesDeclaration* castedThisObj = static_cast<JSCSSVariablesDeclaration*>(thisValue);
    CSSVariablesDeclaration* imp = static_cast<CSSVariablesDeclaration*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& variableName = args[0]->toString(exec);


    KJS::JSValue* result = jsString(exec, imp->removeVariable(variableName, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsCSSVariablesDeclarationPrototypeFunctionSetVariable(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSVariablesDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSVariablesDeclaration* castedThisObj = static_cast<JSCSSVariablesDeclaration*>(thisValue);
    CSSVariablesDeclaration* imp = static_cast<CSSVariablesDeclaration*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& variableName = args[0]->toString(exec);
    const UString& value = args[1]->toString(exec);

    imp->setVariable(variableName, value, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsCSSVariablesDeclarationPrototypeFunctionItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSVariablesDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSVariablesDeclaration* castedThisObj = static_cast<JSCSSVariablesDeclaration*>(thisValue);
    CSSVariablesDeclaration* imp = static_cast<CSSVariablesDeclaration*>(castedThisObj->impl());
    unsigned index = args[0]->toInt32(exec);


    KJS::JSValue* result = jsString(exec, imp->item(index));
    return result;
}


JSValue* JSCSSVariablesDeclaration::indexGetter(ExecState* exec, const Identifier& propertyName, const PropertySlot& slot)
{
    JSCSSVariablesDeclaration* thisObj = static_cast<JSCSSVariablesDeclaration*>(slot.slotBase());
    return jsStringOrNull(exec, thisObj->impl()->item(slot.index()));
}
KJS::JSValue* toJS(KJS::ExecState* exec, CSSVariablesDeclaration* obj)
{
    return cacheDOMObject<CSSVariablesDeclaration, JSCSSVariablesDeclaration, JSCSSVariablesDeclarationPrototype>(exec, obj);
}
CSSVariablesDeclaration* toCSSVariablesDeclaration(KJS::JSValue* val)
{
    return val->isObject(&JSCSSVariablesDeclaration::s_info) ? static_cast<JSCSSVariablesDeclaration*>(val)->impl() : 0;
}

}
