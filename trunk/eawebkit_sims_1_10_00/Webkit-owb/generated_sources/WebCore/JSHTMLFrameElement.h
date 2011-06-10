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

#ifndef JSHTMLFrameElement_h
#define JSHTMLFrameElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLFrameElement;

class JSHTMLFrameElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLFrameElement(KJS::JSObject* prototype, HTMLFrameElement*);
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual void put(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::JSValue*);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        FrameBorderAttrNum, LongDescAttrNum, MarginHeightAttrNum, MarginWidthAttrNum, 
        NameAttrNum, NoResizeAttrNum, ScrollingAttrNum, SrcAttrNum, 
        ContentDocumentAttrNum, ContentWindowAttrNum, LocationAttrNum, WidthAttrNum, 
        HeightAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };

    // Custom attributes
    void setSrc(KJS::ExecState*, KJS::JSValue*);
    void setLocation(KJS::ExecState*, KJS::JSValue*);
};


class JSHTMLFrameElementPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    JSHTMLFrameElementPrototype(KJS::ExecState* exec)
        : KJS::JSObject(JSHTMLElementPrototype::self(exec)) { }
};

} // namespace WebCore

#endif
