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

#include "JSHTMLHtmlElement.h"

#include <wtf/GetPtr.h>

#include "HTMLHtmlElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLHtmlElementTableValues[3] =
{
    { "version", (intptr_t)JSHTMLHtmlElement::VersionAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLHtmlElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLHtmlElementTable = { 3, JSHTMLHtmlElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLHtmlElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLHtmlElementConstructorTable = { 0, JSHTMLHtmlElementConstructorTableValues, 0 };

class JSHTMLHtmlElementConstructor : public DOMObject {
public:
    JSHTMLHtmlElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLHtmlElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLHtmlElementConstructor::s_info = { "HTMLHtmlElementConstructor", 0, &JSHTMLHtmlElementConstructorTable, 0 };

bool JSHTMLHtmlElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLHtmlElementConstructor, DOMObject>(exec, &JSHTMLHtmlElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLHtmlElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLHtmlElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLHtmlElementPrototypeTable = { 0, JSHTMLHtmlElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLHtmlElementPrototype::s_info = { "HTMLHtmlElementPrototype", 0, &JSHTMLHtmlElementPrototypeTable, 0 };

JSObject* JSHTMLHtmlElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLHtmlElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLHtmlElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLHtmlElement::s_info = { "HTMLHtmlElement", &JSHTMLElement::s_info, &JSHTMLHtmlElementTable , 0 };

JSHTMLHtmlElement::JSHTMLHtmlElement(JSObject* prototype, HTMLHtmlElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLHtmlElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLHtmlElement, Base>(exec, &JSHTMLHtmlElementTable, this, propertyName, slot);
}

JSValue* JSHTMLHtmlElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case VersionAttrNum: {
        HTMLHtmlElement* imp = static_cast<HTMLHtmlElement*>(impl());
        return jsString(exec, imp->version());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLHtmlElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLHtmlElement, Base>(exec, propertyName, value, &JSHTMLHtmlElementTable, this);
}

void JSHTMLHtmlElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case VersionAttrNum: {
        HTMLHtmlElement* imp = static_cast<HTMLHtmlElement*>(impl());
        imp->setVersion(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLHtmlElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLHtmlElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLHtmlElementConstructor>(exec, constructorIdentifier);
}


}
