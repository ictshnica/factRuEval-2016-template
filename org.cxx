#encoding "utf-8"

OrgDescr -> AnyWord<kwtype="org_descr">;

Org -> OrgDescr interp(Object.Descr) AnyWord<h-reg1> interp(Object.Name; Object.Type="ORG");
Org -> OrgDescr interp(Object.Descr) AnyWord<l-quoted, r-quoted> interp(Object.Name; Object.Type="ORG");

Root -> Org;
