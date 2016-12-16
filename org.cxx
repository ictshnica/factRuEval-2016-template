#encoding "utf-8"

OrgDescr -> AnyWord<kwtype="org_descr">;
OrgHead -> AnyWord<kwtype="org_head">;

Quoted_Words -> AnyWord<l-quoted, r-quoted>;
Quoted_Words -> AnyWord<l-quoted, ~r-quoted> Word<~quoted>*AnyWord<~l-quoted, r-quoted>;

Org -> OrgDescr interp(Object.Descr) AnyWord<h-reg1> interp(Object.Name; Object.Type="ORG");
Org -> OrgDescr interp(Object.Descr) Quoted_Words<l-quoted, r-quoted> interp(Object.Name; Object.Type="ORG");
Org  -> OrgHead AnyWord<h-reg1>;

Root -> Org;
