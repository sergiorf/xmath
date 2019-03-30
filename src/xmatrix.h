
class XMatrix {
public:
	XMatrix(int rows, int cols);
	~XMatrix();
private:
	const int m_rows;
	const int m_cols;
	double *m_vals;
};

