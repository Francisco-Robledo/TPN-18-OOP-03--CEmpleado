#include <iostream>
using namespace std;

class CEmpleado {
	
	private:
		
		int Ingreso;
		string Nombre;
		string Direccion;
		float Salario;
		
		public:
		
		CEmpleado (int _Ingreso, string _Nombre, string _Direccion, float _Salario);
		
		int SetFechaIngreso (int _Ingreso);
		string SetNombreEmpleado (string _Nombre);
		string SetDireccionEmpleado (string _Direccion);
		float SetSalarioEmpleado (float _Salario);
		int CalcularAniosAntiguedad (int _Ingreso);
		string DondeVive(string _Direccion);
			
};

CEmpleado::CEmpleado (int _Ingreso, string _Nombre, string _Direccion, float _Salario) {
	Ingreso = SetFechaIngreso(_Ingreso);
	Nombre = SetNombreEmpleado(_Nombre);
	Direccion = SetDireccionEmpleado(_Direccion);
	Salario = SetSalarioEmpleado(_Salario);
}

int CEmpleado::SetFechaIngreso(int _Ingreso) {
	Ingreso = _Ingreso;
	return Ingreso;
}

string CEmpleado::SetNombreEmpleado (string _Nombre) {
	Nombre = _Nombre;
	return Nombre;
}

string CEmpleado::SetDireccionEmpleado (string _Direccion) {
	Direccion = _Direccion;
	return Direccion;
}

float CEmpleado::SetSalarioEmpleado (float _Salario) {
	Salario = _Salario;
	return Salario;
}

int CEmpleado::CalcularAniosAntiguedad (int _Ingreso) {
	int AniosAntiguedad = 2024;
	
	AniosAntiguedad -= _Ingreso;
	
	return AniosAntiguedad;
}

string CEmpleado::DondeVive(string _Direccion) {
 if (_Direccion == "WallStreet");
 
 return "Si";
}

int main () {
	
	string Nombre = "Robero Magico", Direccion = "64C- WallStreet";
	int Ingreso = 2014;
	float Salario = 30000;

	CEmpleado Final = CEmpleado(Ingreso, Nombre, Direccion, Salario);
	
	int AniosAntiguedad = Final.CalcularAniosAntiguedad(Ingreso);
	string NombreEmpleado = Final.SetNombreEmpleado(Nombre);
	string DireccionEmpleado = Final.DondeVive(Direccion);
	float SalarioEmpleado = Final.SetSalarioEmpleado(Salario);
	
	cout << "************************************************************************************************************************";
	
	cout << "Nombre del empleado: " << NombreEmpleado << endl << "La direccion del empleado es: " << Direccion << endl << "El salario del empleado es: " << SalarioEmpleado << endl;
	
	cout << "************************************************************************************************************************";
	
	cout << "Años de antiguedad: " << AniosAntiguedad << endl;
	cout << "¿El empleado vive en WallStreet? " << DireccionEmpleado;
	
	return 0;
}
